#include<iostream>
using namespace std;
void extreamPrintArray(int arr[],int size){
int i=0;
int j=size-1;
while(i<=j){
  cout<<arr[i]<<" "<<arr[j]<<" ";
  i++;
  j--;
}
}
int main(){
int arr[]={10,20,30,40,50,60};
int size=6;
extreamPrintArray(arr,size);
}
