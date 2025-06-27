#include<iostream>
using namespace std;
int partition(int ar[],int st,int end){
    int idx=st-1,pivot=ar[end];
    for(int i=st;i<end;i++){
        if(ar[i]<pivot){
            idx++;
            swap(ar[i],ar[idx]);
        }
    }
    idx++;
    swap(ar[end],ar[idx]);
    return idx;
    }
void quicks(int ar[],int st,int end){
if(st<end){
    int pividx=partition(ar,st,end);
    quicks(ar,st,pividx-1);
    quicks(ar,pividx+1,end);
   }
}
int main(){
    int ar[5]={3,5,1,2,4};
    quicks(ar,0,4);
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
  return 0;
}