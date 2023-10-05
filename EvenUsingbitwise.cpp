#include<iostream>
using namespace std;
bool evenUsingBitwise(int num){
 if((num&1)==0){
    return 1;
 }
 else{
    return 0;
 }
}
int main(){
cout<<"enter the no:"<<endl;
int num;
cin>>num;
if(evenUsingBitwise(num)){
    cout<<num<<" : is a even no"<<endl;
}
else{
    cout<<num<<" :is a odd no"<<endl;
}
}
