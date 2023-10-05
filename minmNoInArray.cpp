#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[]={1,2,34,82,7,3,4,29,8,15};
int size=10;
int minm=INT_MAX;
for(int i=0;i<size;i++){
        if(arr[i]<minm){
         minm=arr[i];
        }
}
cout<<"the minm no in an array is: "<<minm<<endl;
}
