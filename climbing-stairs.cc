class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
        {
            return n;
        }

        int step1 = 1;
        int step2 = 2;

        // step(n) = step(n-1) + step(n-2)
        for ( int i = 3; i <= n; i++)
        {
            int allStep = step1 + step2;
            step1 = step2;
            step2 = allStep;
        }

        return step2;
    }
};
