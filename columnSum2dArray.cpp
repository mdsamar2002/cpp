#include<iostream>
using namespace std;
void columnSumArray(int arr[5][5],int row,int columns){
for(int i=0;i<row;i++){
        int sum=0;
    for(int j=0;j<columns;j++){
        sum+=arr[j][i];
    }
    cout<<"sum of column: "<<i<<" : "<<sum<<endl;
}
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
columnSumArray(arr,row,columns);
}
