class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, int> mp;
        set<char>st;
        for(int i = 0 ; i < n ; i++){
            if(mp.count(s[i])){
                if(mp[s[i]] == t[i])continue;
                else return false;
            }else{
                if(st.count(t[i]))
                 return false;
            }
            mp[s[i]] = t[i];
            st.insert(t[i]);
        }
    return true;
    }
};