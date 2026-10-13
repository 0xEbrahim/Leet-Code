class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < n ; j++){
                if(nums[j] == i){
                    swap(nums[k++], nums[j]);
                }
            }
        }
    }
};