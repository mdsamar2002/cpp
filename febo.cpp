#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int a=0,b=1;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n;i++){
    int no=a+b;
    cout<<no<<" ";
     a=b;
     b=no;
}







}
