#include<iostream>
using namespace std;
void shiftArrayElement(int arr[],int size){
  int temp=arr[size-1];
  for(int i=size-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=temp;

}

int main(){
int arr[]={10,20,30,40,50,60,70};
int size=7;
shiftArrayElement(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
