#include<iostream>
using namespace std;
void sortArray(int arr[],int size){
int count_0=0;
int count_1=0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        count_0++;
    }
    else if(arr[i]==1){
        count_1++;
    }
}
int i=0;
while(count_0--){
    arr[i]=0;
    i++;
}
while(count_1--){
    arr[i]=1;
    i++;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={0,1,1,0,1,0,1,0,1,0,0,1};
int size=12;
sortArray(arr,size);
}
