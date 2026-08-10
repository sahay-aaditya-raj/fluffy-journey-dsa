class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxProd = nums[0];
        int mnProd = nums[0];
        int r = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < 0)
                swap(mxProd, mnProd);
            mxProd = max(nums[i], nums[i] * mxProd);
            mnProd = min(nums[i], nums[i] * mnProd);
            r = max(r, mxProd);
        }
        return r;
    }
};