#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=1;
while(a<=n){
    int b=1;
    while(b<=a){
        cout<<a;
        b=b+1;
    }
    cout<<endl;
    a=a+1;
}
}
