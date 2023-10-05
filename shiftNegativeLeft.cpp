#include<iostream>
using namespace std;
void shiftNegativeLeft(int arr[],int size){
    int i=0;
   int j=size-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
int arr[]={1,2,-4,6,8,-3,9,7,-1};
int size=sizeof(arr)/sizeof(int);
shiftNegativeLeft(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
