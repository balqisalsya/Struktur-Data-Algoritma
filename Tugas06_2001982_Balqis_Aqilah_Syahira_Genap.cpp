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

void insertTengah(node *kiri,int nilai) {
    node *new_node = new node;
    new_node->data = nilai;
    new_node->next = kiri->next;
    kiri->next = new_node;

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

void hapusAwal()
{
node *hapus;
hapus = head;
head = hapus->next;
delete hapus;
}

int main () {
    insertAwal(30);
    insertAkhir(10);
    insertTengah(head,20);
    hapusAwal();
    tampilkanlist();
    
}

