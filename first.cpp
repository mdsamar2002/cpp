#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter the no"<<endl;
    int temp;
        cin>>temp;
        int num=temp;
         int inc=0;
        while(num!=0){
            int rem=num%10;
            if(rem>=0){
                inc++;
            }
            num=num/10;
        }
        cout<<inc<<endl;
        int ans=0;
        num=temp;
        while(num!=0){

            int value=num%10;
            ans=ans+pow (value,inc);
            num =num/10;

        }
        cout<<ans<<endl;
        if(temp==ans){
            cout<<temp<<" :is a armstrong no"<<endl;
        }
        else{
            cout<<temp<<" :is not a armstrong no"<<endl;
        }






}
