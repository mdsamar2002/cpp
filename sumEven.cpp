#include<iostream>
using namespace std;
int sumEven(int num){
int ans=0;
for(int i=2;i<=num;i+=2){
    ans+=i;
}
return ans;
}
int main(){
   cout<<"enter the no"<<endl;
   int num;
   cin>>num;
cout<<"sum of all even no:"<<sumEven(num)<<endl;
}
