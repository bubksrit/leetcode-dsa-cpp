#include<iostream>
#include<string>
using namespace std;
int pal(int i,string s,int n){
    if(i==n/2)
    return 1;
    if(s[i]==s[n-i-1])
    pal(i+1,s,n-1);
    else
    return 0;
}
int main(){
    string s;
    cout<<"enter";
    cin>>s;
    if(pal(0,s,s.length())==0)
    cout<<"not a palindrome";
    else
    cout<<"palindrome";
    return 0;
}
