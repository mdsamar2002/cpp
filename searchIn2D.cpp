#include<iostream>
using namespace std;
bool searchAnElement(int arr[2][5],int row,int columns,int target){
 for (int i=0;i<row;i++){
    for (int j=0;j<columns;j++){
       if(arr[i][j]==target){
        return true;
       }
    }
 }
 return false;
}
int main(){
int arr[2][5]={{1,2,3,4,5},
                {6,7,8,9,10}
               };
int row=2;
int columns=5;
int target;
cout<<"enter the target value"<<endl;
cin>>target;
bool ans=searchAnElement(arr,row,columns,target);
if(ans==true){
    cout<<"target found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

}
