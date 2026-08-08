class Solution {
public:
    int climbStairs(int n) {
        if (n<4) return n;
        int a = 3;
        int b = 5;
        for(int i=4; i<n; i++){
            int temp = b;
            b=b+a;
            a=temp;
        }
        return b;
    }
};