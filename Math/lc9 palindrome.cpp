#include <climits>
class Solution {
public:
    bool isPalindrome(int n) {
        int rev=0, rem,orn;
        if (n<0)
        return false;
        orn=n;
        while(n>0){
        rem=n%10;
        if(rev>INT_MAX/10||rev<INT_MIN/10)
        return false;
        rev=rev*10+rem;
        n=n/10;
        }
        if (orn==rev)
        return true;
        else 
        return false;


    }
};