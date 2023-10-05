#include<iostream>
using namespace std;
void pairArrayElement(int arr[],int size){
  for(int i=0;i<size;i++){

    for(int j=0;j<size;j++){
        int sum=arr[i]+arr[j];
        cout<<arr[i]<<" "<<arr[j]<<" "<<sum<<endl;
    }
  }
}
int main(){
int arr[4];
int size=4;
cout<<"enter the value"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
pairArrayElement(arr,size);
}
