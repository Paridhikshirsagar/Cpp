class Solution {
public:
    bool isPalindrome(int x) {
        int n = x ; 
        long long sum = 0 ; 
        while (n>0) {
            sum = sum *10;
            int ld = n%10;
            sum = sum + ld;
            n/=10;
        }
        if (sum == x) {
            return true;
        } 
        else { return false;}
    }
};