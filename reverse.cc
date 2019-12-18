//https://leetcode-cn.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        int ret = 0;

        int maxLeg = MAX_INT % 10;
        int minLeg = -((-1*MIN_INT) % 10);

        while(x != 0){
            // 从个位数开始拿反向的整数
            int pop = x % 10;

            if (ret > MAX_INT / 10 || (ret / 10 == MAX_INT && pop > maxLeg)){
                return 0;
            }
            if (ret < MIN_INT / 10 || (ret / 10 == MIN_INT && pop < minLeg)){
                return 0;
            }

            ret = ret * 10 + pop;
            x/=10;
        }

        return ret;
    }
};