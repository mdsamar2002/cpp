#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
for(int i=1;i<=num;i++){
        for(int j=1;j<=2*num-1;j++){
                if(j<=num-i){
                    cout<<" ";
                }
                else if(j<=num+i-1){
                         if(j<=num-i+1||j==num+i-1||i==num){
                    cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                }
                else{
                    cout<<" ";
                }
            }
        cout<<endl;
    }
}
