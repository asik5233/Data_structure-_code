#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(int val){
    data=val;
    next=NULL;
}
};
class List{
Node*head;
Node*tail;
public:
List(){
    head=tail=NULL;
}

void insert_first(int val){
Node *newnode=new Node(val);
if(head==NULL){
head=tail=newnode;
return;
}
else{
newnode->next=head;
head=newnode;
}
}

void print_ll(){
Node*temp=head;
while (temp!=NULL)
{
 cout<<temp->data<<"->";
 temp=temp->next;
}
cout<<endl;
}
void insert_after(int val){
Node*newnode=new Node(val);
if(head==NULL){
    head=tail=newnode; 
  }else{
    tail->next=newnode;
    newnode=tail;
}
} 

void delete_first(){
  if(head==NULL){
    cout<<"ll is empty";
    return;
  }
  Node*temp=head;
  head=head->next;
  temp->next=NULL;
  delete temp;
}
void delete_after(){
Node*temp=head;
while (temp->next!=tail)
{ 
    temp=temp->next;
}
temp->next=NULL;
delete tail;
tail=temp;
}
void printreverse(Node*head){
int count=0;
Node*temp=head;
while(temp){
  count++;
  temp=temp->next;
}
int*a=new int [count];
temp=head;
for(int i=0;i<count;i++){
  a[i]=temp->data;
  temp=temp->next;
}
for(int i=count-1;i>=0;i++){
  cout<<a[i]<<"  ";
  cout<<endl;
  delete[]a;
}
}
};
int main(){
List ll;
ll.insert_first(3);
ll.insert_first(2);
ll.insert_first(1);
ll.insert_first(0);
ll.print_ll();
ll.printreverse();
return 0;
}