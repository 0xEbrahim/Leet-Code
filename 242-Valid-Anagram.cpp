class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> v(26, 0);
        int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++) {
            v[s[i] - 'a']++;
            if (v[s[i] - 'a'] == 1)
                x++;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            v[t[i] - 'a']--;
            if (v[t[i] - 'a'] == 0)
                cnt++;
            if (v[t[i] - 'a'] < 0)
                cnt--;
        }
        return cnt == x;
    }
};