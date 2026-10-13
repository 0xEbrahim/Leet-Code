class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();
        int l = 0, r = n - 1;
        while(l < r){
            if(v[l] + v[r] > target) r--;
            else if(v[l] + v[r] < target) l++;
            else{
       
                return {l + 1, r+1};
            }
        }   
        return {};
    }
};