#include<iostream>
using namespace std;
void bubblesort( int ar[],int n){
  int i,j;  
for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++){
 if(ar[j]>ar[j+1]){
  swap(ar[j],ar[j+1]);
   }
  }
 }}
void printsort(int ar[],int n){
for(int i=0;i<n;i++){
cout<<ar[i]<<" ";
}
cout<<endl;
}
int main(){
int ar[]={2,4,5,1,7,8};
int n=6;
cout<<"sorted array is = ";
bubblesort(ar,n);
printsort(ar,n);
return 0;
}