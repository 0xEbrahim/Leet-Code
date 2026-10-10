class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<pair<int, int>> v(26, {-1,0});
        for(int i = 0 ; i < n ; i++){
            if(v[s[i] - 'a'].first == -1){
                v[s[i] - 'a'].first = i;
            }
            v[s[i] - 'a'].second++;
        }
        int mn = INT_MAX;
        for(int i = 0 ; i < 26 ; i++){
            if(v[i].second == 1)
                mn = min(mn, v[i].first);
        }
        return mn == INT_MAX ? -1 : mn;
    }
};