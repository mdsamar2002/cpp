#include<iostream>
using namespace std;
int minmNoArray(int arr[2][5],int row,int columns,int minm){
   for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        if(minm>arr[i][j]){
         minm=arr[i][j];
        }
    }
   }
   return minm;
}
int main(){
int arr[2][5]={{15,2,3,4,5},
                {6,7,8,9,10}
               };
int row=2;
int columns=5;
int minm=INT_MAX;
int ans=minmNoArray(arr,row,columns,minm);
cout<<"the minm no in this array is: "<<ans;
}
