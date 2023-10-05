#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size,int target){
  int s=0;
  int e=size-1;
  int mid=s +(e-s)/2;
  int ans=0;
  while(s<=e){
    if(target==arr[mid]){
        ans=mid;
        e=mid-1;
    }
    else if(target>arr[mid]){
        s=mid+1;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    mid=s +(e-s)/2;
  }
  return ans;
}
int main(){
int arr[]={1,2,3,3,4,4,5};
int size=sizeof(arr)/sizeof(int);
int target=4;
int ans=firstOccurance(arr,size,target);
cout<<"found at: "<<ans<<endl;
}
