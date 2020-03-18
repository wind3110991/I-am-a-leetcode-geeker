class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool res = false;
        while (n > 0)
        {
            if (n == 1)
            {
                res = true;
                break;
            }

            if (n  != n / 2 * 2)
            {
                break; 
            }


            n /= 2;
        }

        return res;
    }
};

/*
https://leetcode-cn.com/problems/power-of-two/solution/kao-lu-bian-jie-he-lin-jie-de-qing-kuang-fei-chang
*/
