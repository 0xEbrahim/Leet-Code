class Solution {
public:
    bool canConstruct(string a, string b) {
        vector<int> freq(26, 0);
        int n = a.size(), m = b.size();
        for(int i = 0 ; i < n ; i++)
        freq[a[i] - 'a']++;
        for(int i = 0 ; i < m ; i++)
        freq[b[i] - 'a']--;
        for(int i = 0 ; i < 26 ; i++)
        if(freq[i] > 0)return false;
        return true;
    }
};