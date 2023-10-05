#include<iostream>
using namespace std;
void sortingArrayElement(int arr[],int size){
int count_0=0;
int count_1=0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        count_0++;
    }
     if(arr[i]==1){
        count_1++;
    }
}

int i;
for(i=0;i<count_0;i++){
     arr[i]=0;
}
for(int j=i;j<size;j++){
        arr[j]=1;
    }

}
int main(){
int arr[]={0,1,1,0,1,0,0,1,0,1};
int size=10;
sortingArrayElement(arr, size);
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
