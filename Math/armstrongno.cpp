#include<iostream>
#include<math.h>
using namespace std;
int arm(int n){
    int rem,orn,cnt;
    int sum=0,td=0;
    if (n<0)
    return 0;
    orn=n;
    cnt=n;
    while(cnt>0){
        cnt=cnt/10;
        td++;
    }
    while(n>0){
    rem=n%10;
    sum+=pow(rem,td);
    n=n/10;
    }
    if(orn==sum)
    return 1;
    else 
    return 0;
}
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    if (arm(n)==0){
        cout<<"no";
    }
    else
    cout<<"yes";
    return 0;

}