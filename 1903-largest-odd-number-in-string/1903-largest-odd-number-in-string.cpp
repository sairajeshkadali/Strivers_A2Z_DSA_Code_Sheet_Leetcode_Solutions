class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int i = num.length() - 1;
        while (i >= 0 && num[i] % 2 == 0)
            i--;
        while (i >= 0) {
            ans += num[i];
            i--;
        }
        int n = ans.length();
        if (n < 1)
            return ans;
        i = n - 1;
        while (ans[i] == '0') {
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};