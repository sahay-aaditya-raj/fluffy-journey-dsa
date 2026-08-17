class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int c = 0;
        int mx = c;
        bool got1 = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == 1 || nums[i]==1) got1=true;
            if(nums[i-1]==1 && nums[i]==1){
                c++;
                mx = max(mx,c);
            } else {
                c = 0;
            }
        }
        return got1?mx+1:mx;
    }
};