#include<iostream>
using namespace std;
void noOfVowels(string sc){
    int size=sc.length();
    int count=0;
  for(int i=0;i<size;i++){
    if(sc[i]=='a'||sc[i]=='e'||sc[i]=='i'||sc[i]=='o'||sc[i]=='u'){
        count++;
    }
  }
  cout<<"no of vowels in string is: "<<count<<endl;
}

int main(){
string sc;
cout<<"enter your string"<<endl;
cin>>sc;
noOfVowels(sc);
}
