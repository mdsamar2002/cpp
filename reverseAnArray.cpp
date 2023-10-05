#include<iostream>
using namespace std;
int reverseAnArray(int arr[],int size){
    int j=size-1;
 for(int i=0;i<j;i++){
      swap(arr[i],arr[j]);
       j--;
  }
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={1,2,3,4,5};
int size=5;
reverseAnArray(arr,size);

}
