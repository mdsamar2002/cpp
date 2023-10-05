#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> ans,int n) {
         for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(ans[j]>ans[j+1] && j+1<n-i){
                   swap(ans[j],ans[j+1]);
                }
            }
   }
}

int main(){
       vector<int>ans={5,4,3,2,1,1,0};
        int n=ans.size();
     bubbleSort(ans,n);
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }

