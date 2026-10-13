class Solution {
public:
    bool checkAlpha(char c) {
        return isdigit(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            while (l<= r && not checkAlpha(s[l]))
                l++;
            while (r >= l && not checkAlpha(s[r]))
                r--;
            if (l <= r) {
                if((isdigit(s[l]) && not isdigit(s[r])) || (isdigit(s[r]) && not isdigit(s[l])))
                return false;
                if (isdigit(s[l]) && s[l] != s[r])
                 return false;
                if(s[l] == s[r] || tolower(s[l]) == tolower(s[r]))
                    l++, r--;
                else
                    return false;
            }
        }
        return true;
    }
};