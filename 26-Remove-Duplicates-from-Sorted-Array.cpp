class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 1;
        int first = nums[0];
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != first)
             first = nums[i], swap(nums[idx++], nums[i]); 
        }
        return idx;
    }
};