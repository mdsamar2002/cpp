#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int i=0;
int sum=0;
while(n!=0){
    int bit=n%10;
    if(bit==1){
        sum=sum+pow(2,i);

}
    n=n/10;
    i++;
}
cout<<sum;

}














