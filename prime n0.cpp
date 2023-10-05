#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
bool prime=1;
for(int i=2;i<n;i++){
    if(n%i==0){
        prime=0;
        break;
    }
}
if(prime==0){
    cout<<"not a prime"<<endl;
}
    else{
        cout<<"prime no"<<endl;
    }
}






