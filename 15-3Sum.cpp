class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n = v.size();
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && v[i] == v[i - 1])
                continue;
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = v[i] + v[j] + v[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else {
                    ans.push_back({v[i], v[j], v[k]});
                    j++, k--;
                    while (j < k && v[j] == v[j - 1])
                        j++;
                }
            }
        }
        return ans;
    }
};