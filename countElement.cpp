#include<iostream>
using namespace std;
int noOfZeroesandOnes(int arr[],int size){
int count_0=0;
int count_1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count_0++;
        }
        else if(arr[i]==1){
            count_1++;
                    }
    }
    cout<<"the no of zeroes are: "<<count_0<<endl;
     cout<<"the no of ones are: "<<count_1<<endl;


}
int main(){
int arr[]={0,0,1,1,1,0,1,0,1,0};
int size=10;
noOfZeroesandOnes(arr,size);


}
