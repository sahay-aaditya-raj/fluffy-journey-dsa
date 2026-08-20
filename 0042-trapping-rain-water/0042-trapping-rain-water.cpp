class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lm = height[0];
        int rm = height[n-1];
        int l=1;
        int r=n-2;
        int res = 0;
        while(l<=r){
            if(lm>rm){
                if(height[r]<rm){
                    res+=rm-height[r];
                } else {
                    rm = height[r];
                }
                r--;
            } else {
                if(height[l]<lm){
                    res+=lm-height[l];
                } else {
                    lm = height[l];
                }
                l++;
            }
        }
        return res;
    }
};