#include<iostream>
#include<math.h>
using namespace std;
int digits(int num){
int ans=0,i=0;
while(num!=0){
    int value=num%10;
    ans=(value*(pow(10,i)))+ans;
     i++;
    num=num/10;
   }
return ans;

}
int main(){
cout<<"enter the value"<<endl;
int num;
cin>>num;
cout<<"the digits are:"<<digits(num)<<endl;
return 0;
}
