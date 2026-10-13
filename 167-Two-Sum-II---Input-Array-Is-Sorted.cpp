class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();
        int l = 0, r = n - 1;
        vector<int>ans;
        while(l < r){
            if(v[l] + v[r] > target) r--;
            else if(v[l] + v[r] < target) l++;
            else{
                ans.push_back(l + 1);
                ans.push_back(r + 1);
                return ans;
            }
        }   
        return ans;
    }
};