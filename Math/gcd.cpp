#include<iostream>
using namespace std;
int gcd(int a,int b){
    int g=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
        g=i;
        break;
    }
    return g;
}
//eucladian theorem
int gcd2(int a,int b){
    while(a>0 && b>0){
        if (a>b)
        a=a%b;
        if(b>a)
        b=b%a;
    }
    if(a==0)
    return b;
    if(b==0)
    return a;
}

int main(){
    cout<<gcd2(52,10);
    return 0;
}
