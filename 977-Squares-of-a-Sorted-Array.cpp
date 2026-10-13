class Solution {
public:
    int squ(int i) { return i * i; }
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sq(n);
        int i = 0, j = n - 1;
        for(int p = n - 1 ; ~p ; p--){
            if(abs(nums[i]) > abs(nums[j])){
                sq[p] = nums[i] * nums[i];
                i++;
            }else{
                sq[p] = nums[j] * nums[j];
                j--;
            }
        }
        return sq;
    }
};