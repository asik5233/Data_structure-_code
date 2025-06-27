#include<iostream>
using namespace std;
int main(){
int ar[10];
int n,pos,i;
cout<<"Enter the size of array:\n";
cin>>n;
cout<<"Array before delete:\n";
for(i=0;i<n;i++){ 
cin>>ar[i];
}
for(i=0;i<n;i++){
 cout<<"ar["<<i<<"]="<<ar[i]<<endl;
    }
    
cout<<"enter the position you want to delete:\n";
cin>>pos;
if(pos<0||pos>=n){
    cout<<"invalid index";
}else{
for(i=pos;i<n;i++){
ar[i]=ar[i+1];
}
n--;
cout<<"array after delete:\n";
for(i=0;i<n;i++){
    cout<<"ar["<<i<<"]="<<ar[i]<<endl;
}
}
return 0;

}