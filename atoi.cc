//https://leetcode-cn.com/problems/string-to-integer-atoi/solution/
class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int flag = 1;
        int ret = 0;

        // int INT_MAX = pow(2, 31) - 1;
        // int INT_MIN = -pow(2, 31);

        int int_min = -pow(2, 31);
        int int_max = pow(2, 31) - 1;

        int INT_MAX_POST = 7;
        int INT_MIN_POST = 8;

        while(str[i] == ' ') {
            i++;
        }

        if (str[i] == '-') {
            flag = -1;
            i++;
        } else if (str[i] == '+')
        {
            flag = 1;
            i++;
        }

        while(i < str.size()) {
            if (str[i] < '0' || str[i] > '9' )
            {
                return ret * flag;
            }

            if (str[i] == ' ')
            {
                i++;
                continue;
            }

            int post = str[i] - '0';

            if (flag == 1 && (int_max / 10 < ret || (int_max / 10 == ret && post >= INT_MAX_POST))){
                return int_max;
            }
            if (flag == -1 && (-(int_min / 10) < ret || (-ret == int_min / 10 && post >= INT_MIN_POST)))
            {
                return int_min;
            }

            ret = post + ret * 10;

            i++;
        }

        return flag*ret;
    }
};