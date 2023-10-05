#include<iostream>
using namespace std;
int uniqueElement(int arr[],int size){
 int ans=0;
 for(int i=0;i<size;i++){
    ans=ans^arr[i];
 }
 return ans;
}
int main(){
int arr[]={1,2,3,4,5,1,2,3,4};
int size=9;

cout<<uniqueElement(arr,size)<<endl;
}
