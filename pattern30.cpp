#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int x=1;
while(x<=n){
    int y=1;
    int b=1;
    while(y<=n-x+1){
        cout<<b;
        b=b+1;
        y=y+1;
    }
    int c=1;
    while(c<=x-1){
            cout<<'*';
        c=c+1;

    }
    int d=1;
    while(d<x){
        cout<<'*';
        d=d+1;
    }
    int e=n-x+1;
    int f=n+1;
    while(f<=n+n-x+1){
        cout<<e;
        e=e-1;
        f=f+1;
    }

    cout<<endl;
    x=x+1;
}
}
