#include<iostream>
using namespace std;
void inserts(int ar[],int n){
int i;
for(i=1;i<n;i++){
int curr=ar[i];
int prev=i-1;
while (prev>=0 && ar[prev]>curr)
{
     ar[prev+1]=ar[prev];
     prev--;   
}
ar[prev+1]=curr;
  }
 }
 void printar(int ar[],int n){
    for(int i=0;i<n;i++){
    
        cout<<ar[i]<<" ";
    }
    cout<<endl;
 }
int main(){
    int n=6;
    int  ar[]={5,3,2,6,4,1};
    cout<<"sorted array elements is = ";
    inserts(ar,n);
    printar(ar,n);
    return 0;
}