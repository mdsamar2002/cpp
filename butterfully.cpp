#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
int n=num/2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int k=1;k<=2*n-2*i;k++){
        cout<<" ";
    }
    for(int l=1;l<=i;l++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
    }
    for(int k=1;k<=2*i-2;k++){
        cout<<" ";
    }
    for(int l=1;l<=n-i+1;l++){
        cout<<"*";
    }
    cout<<endl;
}
}
