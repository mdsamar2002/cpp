#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int> >arr={{1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}};
int rowsize=arr.size();
int colsize=arr[0].size();
for(int col=0;col<colsize;col++){

       if((col&1)==0){
        for(int i=0;i<rowsize;i++){
            cout<<arr[i][col]<<" ";
        }
       }
        else{
            for(int i=rowsize-1;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
        }
    }
}

