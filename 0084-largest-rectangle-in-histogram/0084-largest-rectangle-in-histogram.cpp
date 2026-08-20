class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int m = 0;
        stack<int> st;
        for (int i = 0; i <= heights.size(); i++) {
            int c = (i == heights.size()) ? 0 : heights[i];
            while (!st.empty() && heights[st.top()] > c) {
                int h = heights[st.top()];
                st.pop();
                int l = st.empty() ? -1 : st.top();
                int w = i - l - 1;
                m = max(m, h * w);
            }
            st.push(i);
        }
        return m;
    }
};