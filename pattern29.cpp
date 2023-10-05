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
    int b=1;
    int y=1;
    while(y<=x-1){
        cout<<b;
        b=b+1;
        y=y+1;
    }
    int z=1;
    while(z<=x){
        cout<<z;
        z=z+1;
    }
    cout<<endl;
    x=x+1;
}
}
