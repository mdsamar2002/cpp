#include<iostream>
using namespace std;
int  missingElement(int arr[],int size){
  int s=0;
  int e=size-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    int difference=arr[mid]-mid;
    if(difference==1){
        s=mid+1;
    }
    else{
        ans=mid+1;
        e=mid-1;
     }
    mid=s+(e-s)/2;
  }
  return ans;
}
int main(){
 int arr[]={1,2,4,5,6,7,8,9};
 int size=sizeof(arr)/sizeof(int);
 int ans=missingElement(arr,size);
 cout<<"missing element is: "<<ans<<endl;
}
