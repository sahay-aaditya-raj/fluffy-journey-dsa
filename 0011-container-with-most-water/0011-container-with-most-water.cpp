class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mxWater = 0;
        int left=0;
        int right=heights.size()-1;
        while(left<right){
            mxWater = max(mxWater, (right-left)*min(heights[left], heights[right]));
            if(heights[left]>heights[right]) right--;
            else left++;
        }
        return mxWater;
    }
};
