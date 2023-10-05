#include <iostream>
using namespace std;
int main(){
cout<<"enter the digit"<<endl;
int n;
cin>>n;
int pro=1;
int sum=0;
while(n!=0){
    int num=n%10;
    pro=pro*num;
    sum=sum+num;
    n=n/10;

}
int diff=pro-sum;
cout<<diff<<endl;
}
