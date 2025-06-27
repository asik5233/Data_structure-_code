#include<iostream>
using namespace std;
void bubblesort( char ar[],int n){
  int i,j;  
for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++){
 if(ar[j]>ar[j+1]){
  swap(ar[j],ar[j+1]);
   }
  }
 }
}
void printsort(char ar[],int n){
for(int i=0;i<n;i++){
cout<<ar[i]<<" ";
}
cout<<endl;
}
int main(){
char ar[]={'c','q','u','a','b','i'};
int n=6;
cout<<"sorted array is = ";
bubblesort(ar,n);
printsort(ar,n);
return 0;
}