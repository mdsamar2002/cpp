#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int a;
cin>>a;
int x=1;
while(x<=a){
    int sp=a-x;
    while(sp){
            cout<<" ";
            sp=sp-1;
        }
        int y=1;
        while(y<=x){
            cout<<"*";
            y=y+1;
        }
        cout<<endl;
        x=x+1;
}
}
