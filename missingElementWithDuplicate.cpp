#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  missingElement(vector<int>v,int size){

  for(int i=0;i<size;i++){
       if(v[i]!=i+1){
        cout<<i+1<<" ";
       }
  }
}
int main(){
 vector<int>v{3,3,3,4};
  int size=v.size();
  sort(v.begin(),v.end());
  missingElement(v,size);

}
