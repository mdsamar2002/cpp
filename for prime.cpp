#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
bool isprime=1;
for(int a=2;a<n;a++){
    if(n%a==0){
            isprime=0;
    }
}
    if(isprime==0){
        cout<<"is not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;

    }
}

