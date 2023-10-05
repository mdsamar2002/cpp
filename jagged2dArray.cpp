#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<vector<int> >arr;
 vector<int>v1(5,0);
 vector<int>v2(4,1);
 vector<int>v3(3,2);
 vector<int>v4(2,3);
 vector<int>v5(1,4);
  arr.push_back(v1);
  arr.push_back(v2);
  arr.push_back(v3);
  arr.push_back(v4);
  arr.push_back(v5);
  for(int i=0;i<arr.size();i++){
    for (int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}
