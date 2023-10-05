#include<iostream>
using namespace std;
bool toChecktarget(int arr[],int n){
int target;
cout<<"enter the target"<<endl;
cin>>target;
for(int i=0;i<n;i++){
    if(arr[i]==target){
        return 1;
    }
}
return 0;
}
int main(){
int arr[5];
int n=5;
cout<<"enter the value"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if((toChecktarget(arr,n))==1){
    cout<<"target found"<<endl;
}
else{
    cout<<"target not found"<<endl;
}
return 0;
}
