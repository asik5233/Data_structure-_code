#include<iostream>
using namespace std;
void selectsort(int ar[],int n){
int i,j;
for(i=0;i<n-1;i++){
int smallidx=i;
 for(j=i+1;j<n;j++){
  if(ar[j]<ar[smallidx]){
  smallidx=j;
   }
  }
  swap(ar[i],ar[smallidx]);
 }
}
void printar(int ar[],int n){
for(int i=0;i<n;i++){
  cout<<ar[i]<<" ";
}
cout<<endl;
}
int main(){
int n=6,ar[]={6,4,3,5,2,1};
cout<<"sorted array elements is = ";
selectsort(ar,n);
printar(ar,n);
return 0;
}