class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        int firstTerm = 0, secondTerm = 1, thirdTerm;
        for(int i = 2; i <= n; i++){
            thirdTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = thirdTerm;
        }
        return secondTerm;
    }
};