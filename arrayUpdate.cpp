#include<iostream>
using namespace std;
int main(){
int ar[10];
int n,pos,i,newvalue;
cout<<"Enter the size of array:\n";
cin>>n;
cout<<"Array before update:\n";
for(i=0;i<n;i++){ 
cin>>ar[i];
}
for(i=0;i<n;i++){
 cout<<"ar["<<i<<"]="<<ar[i]<<endl;
 }
cout<<"ENTER THE pos you want to update:\n";
cin>>pos;
cout<<"enter the value that will be update:\n";
cin>>newvalue;
ar[pos]=newvalue;
cout<<"array after update:\n";
for(i=0;i<n;i++){
    cout<< ar[i]<<" "<<endl;
 }

 return 0;

}