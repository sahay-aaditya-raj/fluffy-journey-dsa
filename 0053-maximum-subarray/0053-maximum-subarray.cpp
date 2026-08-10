class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int cur = 0;
        for(int i = 0; i<nums.size(); i++){
            if(cur<0){
                cur=0;
            }
            cur+=nums[i];
            res = max(res,cur);
        }
        return res;

    }
};