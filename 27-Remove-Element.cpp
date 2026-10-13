class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int sw = n - 1;
        bool x = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                x = false;
                while (sw > i && nums[sw] == val)
                    sw--;
                swap(nums[i], nums[sw]);
            }
        }
        return sw + x;
    }
};