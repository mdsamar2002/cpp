#include<iostream>
using namespace std;
int main(){
int arr[10];
int n=10;
for(int i=0;i<n;i++){
    cout<<"enter the value in index: "<<i<<" ";
    cin>>arr[i];
    cout<<endl;
}
for(int i=0;i<n;i++){
    cout<<(2*arr[i])<<endl;
}
}
