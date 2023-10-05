#include <iostream>
using namespace std;
int sum(int num){
int ans=0;
for(int i=1;i<=num;i++){
    ans+=i;

}
    return ans;

}
int main(){
int num;
cin>>num;
cout<<"the sum of n no is:"<<sum(num)<<endl;

}
