#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;
};
   node *head;


void mulai() {
    head = NULL;
}

bool cekKosong()
{
    if (head==NULL)
    return true;
    return false;
}

void insertAwal (int nilai) {
    node *new_node;
    new_node = new node;
    new_node->data = nilai;

    if (cekKosong())
{
    head = new_node;
    head->next = NULL;
}
    else {
        new_node->next = head;
        head = new_node;

    }
}


void insertAkhir(int nilai) {
    node *new_node, *tmp;
    new_node = new node;
    new_node->data = nilai;
    new_node->next = NULL;
    if (cekKosong())
    {
        head = new_node;
        head->next = NULL;
    }else{
        tmp = head;
        while (tmp->next!=NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}

void tampilkanlist ()
{
    if(!cekKosong()) {
        node *tmp;
        tmp = head;
        while (tmp!=NULL)
        {
            cout<<tmp->data <<" ";
            tmp = tmp->next;
        }
    }

}
int main () {
    insertAkhir(10);
    insertAwal(90);
    tampilkanlist ();
}

