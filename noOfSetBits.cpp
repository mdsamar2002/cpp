#include<iostream>
using namespace std;
int noOfSetBits(int num){
 int no=0;
 while(num>0){
    if(num&1){
            no++;
      }
    num=num>>1;
}
return no;

}
int main(){
cout<<"enter the no:"<<endl;
int num;
cin>>num;
cout<<"the no of bits are:"<<noOfSetBits(num)<<endl;
}
