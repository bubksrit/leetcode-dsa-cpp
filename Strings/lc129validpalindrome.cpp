//leetcode problem 129 valid palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for(int i=0;i<s.length();i++){
            if (isalnum(s[i])) 
            {n.push_back(tolower(s[i]));
            }
            else
            continue;
        }
        int l=n.length();
        int ans;
        for(int j=0;j<l;j++){
            if(n[j]==n[l-j-1])
            ans=1;
            else
            {ans=0;
            break;}

        }
        if(ans==1)
        return true;
        else
        return false;
        
    }
};