class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length(), endIndex = -1, startIndex = 0;
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2) {
                endIndex = i;
                break;
            }
        }
        while (startIndex <= n && num[startIndex] == '0')
            startIndex++;
        return num.substr(startIndex, endIndex + 1);
    }
};