#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n,ans=0;
cin>>n;
while(n!=0){

    int rev=n%10;

    ans=(ans*10)+rev;
    n=n/10;

 }
 if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
    cout<<"0"<<endl;
 }
 else{
    cout<<ans<<endl;
 }



}
