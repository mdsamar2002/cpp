#include <iostream>
using namespace std;
int rowSumArray(int arr[][5],int row,int columns){
  for(int i=0;i<row;i++){
        int sum=0;
    for(int j=0;j<columns;j++){
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
  }
}
int main(){
int arr[2][5]={{15,2,3,4,5},
                {6,7,8,9,10}
               };
int row=2;
int columns=5;
int sum=0;
rowSumArray(arr,row,columns);
}
