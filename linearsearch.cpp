#include<iostream>
using namespace std;
int main(){
int arr[5];
int n=5;
cout<<"enter the value"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"enter the target value: "<<endl;
cin>>target;
bool flag=0;
for(int i=0;i<n;i++){
    if(arr[i]==target){
        flag=1;
        break;
    }
}
if(flag==1){
    cout<<"target found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;

}
