#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int m=n;
int seccomp =0;
while(m!=0){
    seccomp = (seccomp<<1)|1;
    m=m>>1;
}
int ans = (~m) & seccomp;
cout<<ans;



}
