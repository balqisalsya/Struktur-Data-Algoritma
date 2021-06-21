#include <iostream>

using namespace std;

struct tree{
    int data;
    tree *left, *right;
};

tree *pohon, *root;

void definisi_awal() {
    pohon = NULL;
}
void insertTree(tree** root, int nilai){
    tree *new_node;

    if ((*root) == NULL) {
        new_node = new tree;
        new_node -> data = nilai;
        new_node -> left = new_node -> right = NULL;

        (*root) = new_node;
        (*root) -> data = nilai;
        (*root) -> left = (*root) -> right = NULL;
        cout <<new_node -> data<<" Data sudah ditambah"<<endl;
    } 
    else if((nilai < (*root) -> data)){
        insertTree (&(*root)->left, nilai);
        cout<<nilai<<" Data sudah ditambah kiri"<<endl;
    }
    else {
        insertTree(&(*root) -> right,nilai);
        cout<<nilai<<" Data sudah ditambah kanan"<<endl;
    }

}

void preOrder(tree *root){
    if(root != NULL) {
    cout <<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right); }
}

void inOrder(tree *root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->data <<" ";
        inOrder(root->right);
    }
}
void postOrder(tree *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data <<" ";
        
    }
}

int main(){
    //cek_node();
    //cout <<cek_node()<<endl;
    definisi_awal();
    insertTree(&pohon, 10);
    cout<<"---"<<endl;
    insertTree(&pohon, 5);
    insertTree(&pohon, 4);
    insertTree(&pohon, 30);
    insertTree(&pohon, 7);
    insertTree(&pohon, 90);

    cout<<" Data PreOrder"<<endl;
    if (pohon == NULL){
        cout <<"tree dalam keadaan kosong"<<endl;
    }
    else{
        preOrder(pohon);
        cout <<endl;
    }
    cout<<" Data InOrder"<<endl;
    if (pohon == NULL){
        cout <<"tree dalam keadaan kosong"<<endl;
    }
    else{
        inOrder(pohon);
        cout <<endl;
    }
    cout<<" Data PostOrder"<<endl;
    if (pohon == NULL){
        cout <<"tree dalam keadaan kosong"<<endl;
    }
    else{
        postOrder(pohon);
        cout <<endl;
    }
}