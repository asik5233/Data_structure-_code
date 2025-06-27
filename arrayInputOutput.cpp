#include<iostream>
using namespace std;
int main(){
int ar[10];
int n,pos,i;
cout<<"Enter the size of array:\n";
cin>>n;
cout<<"Array Elements is:\n";
for(i=0;i<n;i++){ 
cin>>ar[i];
}
for(i=0;i<n;i++){
 cout<<"ar["<<i<<"]="<<ar[i]<<endl;
    }
}