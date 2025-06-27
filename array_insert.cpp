#include<iostream>
using namespace std;
int main(){
char ar[10],newvalue;
int i,index,n;
cout<<" enter the size of array\n";
cin>>n;
cout<<"enter the elements here\n";
for(i=0;i<n;i++){
    cin>>ar[i];
}
for(i=0;i<n;i++){
    cout<<"ar["<<i<<"]="<<ar[i]<<endl;
}
cout<<"enter the index no to be insert\n";
cin>>index;
if(index<0||index>=n){
    cout<<"invalid index";
}else{
cout<<"enter the value you want to insert\n";
cin>>newvalue;
for(i=n;i>=index;i--){

    ar[i+1]=ar[i];
}
ar[index]=newvalue;
n++;
for(i=0;i<n;i++){
    cout<<"ar["<<i<<"]="<<ar[i]<<endl;
}

}

return 0;

}