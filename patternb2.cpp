#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
int i=1;
for(;i<=num;i++){
    for(int j=1;j<=num;j++){
        if(i==1||i==num){
            cout<<"*";
        }
            else if(j==1||j==num){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

    cout<<endl;
}

}



