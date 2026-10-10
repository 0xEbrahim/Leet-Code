class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = nums[0], cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(cnt == 0)maj = nums[i];
            cnt += (nums[i] == maj) ? 1 : -1;
        }
        return maj;
    }
};