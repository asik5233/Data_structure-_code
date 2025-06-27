#include<iostream>
using namespace std;
#include<vector>
class Node{
public:
int data;
Node*left;
Node*right;
Node(int val){
    data=val;
    left=right=NULL;
}
};

Node*insert(Node* root,int val){
if(root==NULL){
    return new Node(val);
}
if(root->data>val){
root->left=insert(root->left,val);
}else{
root->right=insert(root->right,val);    
}
return root;
}

Node* buildBst(vector<int>ar){
Node* root=NULL;
for(int val:ar){
   root= insert(root,val);
}
return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
bool serch(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
    return serch(root->left,key);
    }
    else{
      return serch(root->right,key);
    }
}

int main(){
vector<int>ar={3,2,1,5,6,4};
Node* root =buildBst(ar);
inorder(root);
cout<<"\n"<<serch(root,5);

}