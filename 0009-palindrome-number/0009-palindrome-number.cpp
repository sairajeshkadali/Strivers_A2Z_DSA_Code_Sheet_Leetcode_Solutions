class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int digit, temp = x;;
        long long reverseNum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            reverseNum = reverseNum * 10 + digit;
            temp /= 10;
        }
        return ((x == reverseNum)? true: false);
    }
};