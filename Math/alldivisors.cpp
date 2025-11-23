#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int aldiv(int n){
    vector<int> v;
    for(int i=1;i*i<=n;i++){
    if(n%i==0)
    v.emplace_back(i);
    if(n/i!=i)
   v.emplace_back(n/i);}
    sort(v.begin(),v.end());
    for(auto it:v) 
    cout<<it<<endl;
    return 0;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    aldiv(n);
    return 0;

}