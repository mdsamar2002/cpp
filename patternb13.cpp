#include<iostream>
using namespace std;
int main(){
    cout<<"enter the no"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<" ";
        }
        int k=1;
        for(  ;k<i;k++){
            cout<<k;
        }
        for(int l=1;l<=i;l++){
            cout<<k;
            k--;
        }

        cout<<endl;
    }
}
