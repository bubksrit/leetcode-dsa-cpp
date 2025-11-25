#include<iostream>
#include<utility>
#include<vector>
using namespace std;
void f(int i,int ar[],int n){
    if(i==n/2)
    return;
    swap(ar[i],ar[n-i-1]);
    f(i+1,ar,n);
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int ar[n];
    cout<<"enter elements";
    for(int k=0;k<n;k++)
    cin>>ar[k];
    f(0,ar,n);
    cout<<"swapped elements:";
    for(int k=0;k<n;k++)
    cout<<ar[k]<<endl;
    return 0;

}