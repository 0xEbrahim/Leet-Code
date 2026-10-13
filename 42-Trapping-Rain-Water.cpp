class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int l = 0, r = n - 1;
        int l_mx = h[l], r_mx = h[r];
        int w = 0;
        while (l < r) {
            if (l_mx < r_mx) {
                l++;
                l_mx = max(l_mx, h[l]);
                w += l_mx - h[l];
            } else {
                r--;
                r_mx = max(r_mx, h[r]);
                w += r_mx - h[r];
            }
        }
        return w;
    }
};