class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > mp;
        int n = strs.size();
        for(int i = 0 ; i < n ; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &[a, b] : mp) ans.push_back(b);
        return ans;
    }
};