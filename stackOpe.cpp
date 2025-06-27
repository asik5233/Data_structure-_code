#include<iostream>
using namespace std;
#define n 5
class Stack{  
int *a;
int top;
public:
Stack(){
  a=new int[n];
  top=-1;  
}
void push(int x){
if(top==n-1){
cout<<"overflow conditions"<<endl;
return;
}

top++;
a[top]=x;
cout<<"pushed "<<x<<" index at ="<<top<<endl;
}
void pop(){
  if(top==-1){
   cout<<"empty link list";
   return;
  }
  cout<<"poped "<<a[top] <<" index at ="<<top<<endl;
  top--;

}
void Top(){
    if(top==-1){
   cout<<"empty stack";
   }
cout<<"top index is "<<top;
}
void display(){
int i;
for(i=0;i<=top;i++){
cout<<a[i]<<" "<<endl;
}
}
};
int main(){
Stack s;
s.push(7);
s.push(5);
s.push(9);
s.push(10);
s.pop();
s.display();
s.Top();

return 0;
}