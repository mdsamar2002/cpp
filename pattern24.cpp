#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int a;
cin>>a;
int x=1;
while(x<=a){
    int y=1;
    while(y<=a-x+1){
        cout<<'*';
        y=y+1;
    }
    int sp=a-1;
    while(sp<x){
        cout<<" ";
        sp=sp+1;
    }
    cout<<endl;
    x=x+1;
}
}
