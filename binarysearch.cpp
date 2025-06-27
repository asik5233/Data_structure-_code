#include<iostream>
using namespace std;
int binarysrc(int arr[],int tar){
int st=0,end=4;
int mid;
while (st<=end)
{
     mid=(st+end)/2;
    if(tar>arr[mid]){
        st=mid+1;
    }
    else if(tar<arr[mid] ){
     end=mid-1;
    }
    else {
        return mid;
    }
}
return -1;
}
int main(){
int arr[5]={1,2,3,4,5};
int target=4;
cout<<"target index is=" <<binarysrc(arr,target)<<endl;
}