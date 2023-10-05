#include<iostream>
#include<math.h>
using namespace std;
int noOfDigit(int start){
  int count=0;
  while(start!=0){
    int rem=start%10;
    count++;
    start/=10;
  }
  return count;
}
int checkArmstrong(int start,int ans){
 int sum=0;
 while(start!=0){
    int rem=start%10;
    sum+=pow(rem,ans);
    start/=10;
 }
 return sum;
}
int main(){
int start,end;
cout<<"enter the starting value: "<<endl;
cin>>start;
cout<<"enter the ending value: "<<endl;
cin>>end;
int ans,sum;
for(int i=start;i<=end;i++){
    ans=noOfDigit(i);
    sum=checkArmstrong(i,ans);
    if(i==sum){
        cout<<i<<" ";
    }
}
}
