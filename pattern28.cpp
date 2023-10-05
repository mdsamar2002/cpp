#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int a;
cin>>a;
int no=1;
int x=1;
while(x<=a){
    int sp=1;
 while(sp<=a-x){
    cout<<" ";
    sp=sp+1;
 }
 int y=1;
 while(y<=x){
    cout<<no;
    no=no+1;
    y=y+1;
 }
 cout<<endl;
 x=x+1;
}
}

