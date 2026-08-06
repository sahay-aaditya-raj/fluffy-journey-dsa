class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        m[nums[0]] = -1;
        for(int i=1; i<nums.size(); i++){
            if(m[target - nums[i]] == 0) m[nums[i]]=i;
            else {
                int mx = max(m[target - nums[i]],i);
                int mi = min(m[target - nums[i]],i);
                if(mi == -1) mi=0;
                return {mi,mx};
            }
        }
        return {-1,-1};
    }
};
