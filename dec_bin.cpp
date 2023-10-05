#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int seccomp =0;
while(n!=0){
    int seccomp = (seccomp<<1)|1;
    int n=n>>1;
}
int ans = ~n & seccomp;
cout<<ans;



}
