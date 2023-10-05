#include<iostream>
using namespace std;
void floodsFilled(int arr[][3],int row,int col){
    int ans=2;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                arr[i][j]=ans;
            }
        }
     }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main(){
  int arr[3][3]={{1,1,1},
                 {1,1,0},
                 {1,0,1}};
   int row=3;
   int col=3;
    floodsFilled(arr,row,col);

}


