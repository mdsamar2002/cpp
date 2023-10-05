#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for( int j=1;j<=2*n-i-1;j++){
        cout<<"*";
    }
    for(int k=1;k<=((2*i-1)/2)+1;k++){
           cout<<i<<"*";
    }
    for(int l=1;l<=2*n-i-1;l++){
        cout<<"*";
    }
    cout<<endl;
}


}
