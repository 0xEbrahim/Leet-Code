class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, r = n - 1;
        int ans = INT_MAX;
        int diff = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            int j = i + 1, k = n - 1;
            while( j < k ){
                int sum = nums[i] + nums[j] + nums[k];
                int f = abs(target - sum);
                if(f < diff)
                    ans = sum, diff = f;
                if(sum > target){
                    k--;
                }else if(sum < target){
                    j++;
                }else{
                    k--, j++;
                }
            }
        }
        return ans;
    }
};