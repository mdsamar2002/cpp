#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
for(int i=1;i<=num;i++){
    for(int j=1;j<=2*i-1;j++){
        if(j%2==1){
            cout<<i;
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
}

}
