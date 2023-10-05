#include<iostream>
using namespace std;
int uniqueElement(int arr[],int size){
    int unique=0;
 for(int i=0;i<size;i++){
    unique^=arr[i];
 }
 return unique;
}
int main(){
int arr[]={10,20,30,40,10,20,30};
int size=7;
 int ans=uniqueElement(arr,size);
 cout<<ans<<endl;
}
