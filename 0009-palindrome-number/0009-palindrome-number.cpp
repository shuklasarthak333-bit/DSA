class Solution {
public:
    bool isPalindrome(int x) {
        int n,rev,digit;
        n=x;
        rev=0;
        while(n>0){
            digit=n%10;
            if(rev>INT_MAX/10 || (rev == INT_MAX/10 && digit>7 )){
                return false;
            }
            if (rev<INT_MIN/10 || (rev==INT_MIN/10 && digit <-8)){
                return false;
            }
            rev= rev*10+digit;
            n=n/10;

        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};