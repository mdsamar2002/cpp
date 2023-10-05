#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
n=n/2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1;i<=n;i++){
for(int l=1;l<i;l++){
        cout<<" ";
    }
    for(int m=1;m<=2*n-2*i+1;m++){
        cout<<"*";
    }
    cout<<endl;
}
}
