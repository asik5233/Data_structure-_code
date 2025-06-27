#include<iostream>
using namespace std;
void selectsort(char ar[],int n){
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
void printar(char ar[],int n){
for(int i=0;i<n;i++){

    cout<<ar[i]<<" ";
}
cout<<endl;
}
int main(){
int n=6;
char ar[]={'c','q','u','a','b','i'};
cout<<"sorted array elements is = ";
selectsort(ar,n);
printar(ar,n);
return 0;
}