#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* right;
      Node* left;

    //Constructor
      Node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
      }
};

Node* buildTree(Node* root){

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;

    root = new Node(data);//Constructor called and intilize the new node's data,left,right

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right 7" << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main(){
    Node* root = NULL;

    //creating a tree
    root = buildTree(root);
}