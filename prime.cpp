#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int a,b,c;
cin>>a;
b=2;
while(b<a){
    if(a%b==0){
            cout<<"not prime"<<b<<endl;
       }
        b=b+1;
 }
    cout<<"prime "<< b<<endl;
}

