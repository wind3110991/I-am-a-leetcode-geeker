//palindrome number
//https://leetcode-cn.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {

        if (INT_MAX == x || INT_MIN == x){
            return false;
        }
        int a = 0;
        int pop = x;
        int num = x;
        int flag = 1;

        if (x < 0){
            flag == -1;
            num = -num;
        }

        while(num != 0){
            pop = num % 10;
            a = a * 10 + pop;
            num /= 10;
        }

        return (flag * a) == x;
    }
};