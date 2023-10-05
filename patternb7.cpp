#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
for(int i=0;i<num;i++){
    for(int j=0;j<num-i;j++){
        if(i==0||i==num-1){
            cout<<"*";
        }
        else if(j==0||j==num-i-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }

        }
    cout<<endl;
    }
}




