class Solution {
public:
    int squ(int i) { return i * i; }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        int n = nums.size();
        int nut = n;
        int neg = nut - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                nut = i;
                break;
            }
        }
        neg = nut - 1;
        while (neg >= 0 && nut < n) {
            if (squ(nums[neg]) <= squ(nums[nut])) {
                sq.push_back(squ(nums[neg--]));
            } else {
                sq.push_back(squ(nums[nut++]));
            }
        }
        while (neg >= 0)
            sq.push_back(squ(nums[neg--]));
        while (nut < n)
            sq.push_back(squ(nums[nut++]));

        return sq;
    }
};