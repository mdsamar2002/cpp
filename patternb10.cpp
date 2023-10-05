#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
for(int i=1;i<=num;i++){
        for(int j=1;j<=2*num-i+1;j++){
                if(j<i){
                 cout<<" ";
                }
            else if(j==i||j==2*num-i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
