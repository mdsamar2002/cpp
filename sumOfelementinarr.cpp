#include<iostream>
using namespace std;
int main(){
int arr[5];
int n=5;
for(int i=0;i<n;i++){
    cout<<"enter the element in an array: "<<i<<" ";
    cin>>arr[i];
    cout<<endl;
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<"sum of array element: "<<sum<<endl;
return 0;
}
