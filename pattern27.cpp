#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int x=1;
while(x<=n){
    int sp=1;
    while(sp<=n-x){
    cout<<" ";
    sp=sp+1;
}
    int y=1;
    while(y<=x){
        cout<<x;
        y=y+1;
    }

cout<<endl;
x=x+1;
}
}
