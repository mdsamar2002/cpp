#include<iostream>
using namespace std;
int findquotient(int divisor,int dividend){
int s=0;
int e=dividend;
int mid=s+(e-s)/2;
int ans = -15;
while(s<=e){
    if(divisor*mid==dividend){
        return mid;
    }
    else if(divisor*mid<dividend){
        ans =mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int main(){
int divisor,dividend;
cout<<"enter the value of divisor: "<<endl;
cin>>divisor;
cout<<"enter the value of dividend: "<<endl;
cin>>dividend;
int quotient=findquotient(abs(divisor),abs(dividend));
if(dividend>0&&divisor<0 || dividend<0&&divisor>0){
    cout<<"the quotient is: "<< (0-quotient)<<endl;
}
else{
    cout<<"the quotient is: "<< quotient<<endl;
}
}
