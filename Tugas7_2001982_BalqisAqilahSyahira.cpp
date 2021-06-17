#include <iostream>
#include <conio.h>

using namespace std;

const int panjangantrian = 7;
struct queue
{
int top; 
int tmp[panjangantrian];
} antri;

void createQueue() {
    antri.top = 0; 
}

int isEmpty() {
    if (antri.top <=0) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFully() {
    if (antri.top >= panjangantrian){
        return 1;
    }
    else {
        return 0;
    }
}

void masukanData(){
if(isFully()==1){
    cout <<"Antrian sudah penuh, silahkan untuk kembali besok" <<endl;
}
else {
    cout <<"Masukkan Nomor Antrian : ";
    cin >> antri.tmp[antri.top];
    antri.top++;
    }
}
void deQueue()
{
        if (isEmpty() == 1)
        {
            cout <<"data kosong";
        }
        else { 
            int i =1;
            while (i < antri.top) {
                antri.tmp[i - 1] = antri.tmp[i];
                i++;
            }
            antri.top--;
    }
}
void Print()
{
    if (antri.top==0)
    {
        cout << "Antrian Kosong!!\n";
    }
    else
    {   int i=0;
    cout << "\t==\t Antrian \t==\n";
        for (i=antri.top-1;i>=0;i--)
        {
            cout << "\t==\t  " <<antri.tmp[i] <<" \t\t== \n";
        }
    }
}
void deleteQueue()
{
    int i=1;
    while(i<antri.top)
    {
        antri.tmp[i-1]=antri.tmp[i];
        i++;
    }
    antri.top--;
}
void Find(int data)
{
    int tmp, itmp;
    if(antri.top == 0)
    {
        cout << "Queue Empty!!";
    }
    else
    {
        for (int j=antri.top;j>=0;j--)
        {
          if(data ==antri.tmp[j])
          {
              tmp=data;
              itmp=j;
          }

        }
        if(data==tmp)
        {
            cout << "\n== data [" << data << "] Ditemukan pada index ke-" << itmp << endl;
        }
    }
}

struct node
{
    string data;
    node *next;
};node *isi;

void start()
{
    isi=NULL;
}
bool cekisi()
{
    if (isi==NULL)
    return true;
    return false;
}
void insertawal(string data)
{
    node *new_node;
    new_node = new node;
    new_node->data=data;

    if (cekisi())
    {
        isi=new_node;
        isi->next=NULL;
    }
    else
    {
        new_node->next=isi;
        isi=new_node;
    }
}
void tampilkan()
{
    while (isi != NULL)
    {
        if (isi != NULL)
    {
        cout << " " << isi->data << " "<< endl;

    }
    else
    {
        cout << "| Belum ada task" << endl;
    }
        isi = isi->next;

    }
}
void deleteLast()
{
    node *hapus,*bantu;
    string tmp;
    hapus=isi;
    if(isi->next==isi)
    {
        isi=NULL;
    }
    else
    {
     bantu=isi;
     while(bantu->next->next!=NULL)
     {
            bantu=bantu->next;
     }
    }
    hapus=bantu->next;
    tmp = hapus->data;
    bantu->next=NULL;

    delete hapus;
}


int main() {
    string data;
    int FIND;
    createQueue();
    for (int i=0;i<5;i++)
    {
        //cout << "Masukan Antrian: "; cin >> data;
   // insertawal(data);
    masukanData();
    }

  //  deleteQueue();
   // deleteLast();
    tampilkan();
 cout << "\n== Masukan nomor antrian yang dicari : ";cin >> FIND;
    Find(FIND);
    Print(); getch(); cout << endl << endl;
    deleteQueue();
    Print();
}
