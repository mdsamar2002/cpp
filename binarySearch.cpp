#include<iostream>
using namespace std ;
bool binarySearch(int arr[],int size,int target){
  int s=0;
  int e=size-1;
  int mid=s + (e-s)/2;
  while(s<=e){
    if(arr[mid]==target){
        return true;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    else if(target>arr[mid]){
        s=mid+1;
    }
        mid=s + (e-s)/2;
  }
  return false;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size=sizeof(arr)/sizeof(int);
int target;
cout<<"enter the target: "<<endl;
cin>>target;
bool ans=binarySearch(arr,size,target);
 if(ans==true){
    cout<<"target found"<<endl;
 }
 else{
    cout<<"not found"<<endl;
 }
}
