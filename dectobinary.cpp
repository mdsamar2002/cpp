#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
int ans=0,i=0;
cin>>n;
while(n!=0){
    int a=n&1;
    ans=(a*pow(10,i))+ans;
   n=n>>1;
   i++;
}
cout<<ans<<endl;


}
