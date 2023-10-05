#include<iostream>
using namespace std;
int diagonalSumArray(int arr[][5],int row,int columns,int sum){
 for(int i=0;i<row;i++){
    sum+=arr[i][i];
 }
 return sum;
}
int main(){
int arr[5][5]={{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15},
                {16,17,18,19,20},
                {21,22,23,24,25}
               };
int row=5;
int columns=5;
int sum=0;
int ans=diagonalSumArray(arr,row,columns,sum);
cout<<"the sum of diagonal is: "<<ans<<endl;
}
