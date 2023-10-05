#include<iostream>
using namespace std;
void noOfprimes(int num){
int j;
for(int i=0;i<num;i++){
    if(i>=2){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }
       }
     if(i==j){
            cout<<i<<" ";
    }
     }
}
}
int main(){
int num;
cout<<"enter the no"<<endl;
cin>>num;
noOfprimes(num);
}
