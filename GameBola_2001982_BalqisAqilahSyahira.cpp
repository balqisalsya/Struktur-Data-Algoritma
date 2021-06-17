#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define MAX 100

int top=-1,top1=-1,top2=-1,top3=-1,top4=-1;
int Stack[MAX],Stack1[4],Stack2[MAX],Stack3[MAX],Stack4[MAX];

void push()
{
   if(top == MAX-1)
   {
       cout << "Stack \n";
   }
   else
   {
       top++;
       cout << ">> Masukkan Data : ";
       cin >> Stack[top];
   }
}

void push2()
{
   if(top2 == MAX-1)
   {
       cout << "Stack Penuh\n";
   }
   else
   {
       top2++;
       cout << ">> Masukkan Data : ";
       cin >> Stack2[top2];
   }
}

void push3()
{
   if(top3 == MAX-1)
   {
       cout << "Stack Penuh\n";
   }
   else
   {
       top3++;
       cout << ">> Masukkan Data : ";
       cin >> Stack3[top3];
   }
}
void push4()
{
   if(top4 == MAX-1)
   {
       cout << "Stack Penuh\n";
   }
   else
   {
       top4++;
       cout << "Data tersebut Akan Dipindah Ke Tabung 4\n";
       getch();
   }
}

void pop()
{
    if(top == -1){
      cout << ">> Stack Kosong !" << endl;
    }else{
      cout << "\nData [" << Stack[top] << "]"<<endl;
      Stack[top--];
      push4();
    }
}

void pop2()
{
    if(top2 == -1){
      cout << ">> Stack Kosong !" << endl;
    }else{
      cout << "\nData [" << Stack2[top2] << "]"<<endl;
      Stack2[top2--];
      push4();
    }
}

void pop3()
{
    if(top3 == -1){
      cout << ">> Stack Kosong !" << endl;
    }else{
      cout << "\nData [" << Stack3[top3] << "]"<<endl;
      Stack3[top3--];
      push4();
    }
}
void pop4()
{
    int Tab;
    if(top4 == -1){
      cout << ">> Stack Kosong !" << endl;
    }else{
      cout << "\nData [" << Stack4[top4] << "]"<<endl;
      Stack4[top4--];
      tab:
      cout << "Data Dipindahkan Ke Tabung: ";cin>>Tab;
      if(Tab==1)
      {
          push();
      }
      if(Tab==2)
      {
          push2();
      }
      if(Tab==3)
      {
          push3();
      }
    }
}

void find(int data)
{
    int tmp, itmp;
    if(top == -1)
    {
        cout << "Stack Empty!!";
    }
    else
    {
        for (int j=top;j>=0;j--)
        {
          if(data ==Stack[j])
          {
              tmp=data;
              itmp=j;
          }

        }
        if(data==tmp)
        {
            cout << "angka yang akan terhapus otomatis adalah angka[" << data << "] Ditemukan pada index ke-" << itmp << endl;
        }
    }
}

void Print()
{
    if (top == -1)
    {
        cout << "========    Stack    ========";
        cout << "\n=============================" << endl;
        cout << "           Empty ! \n=============================" << endl;
    }
    else
    {
        cout << "======      Tabung - 1      ======";
        cout << "\n=================================" << endl;
        for (int i = top; i >= 0; i--){

            cout << "\t    =[ " << Stack[i] << "]=" << endl;
        }
        cout << "==================================" << endl;
        cout << "======      Tabung - 2      ======";
        cout << "\n==================================" << endl;
        for (int i = top2; i >= 0; i--){

            cout << "\t    =[ " << Stack2[i] << "]=" << endl;
        }
        cout << "==================================" << endl;
          cout << "======      Tabung - 3      ======";
        cout << "\n==================================" << endl;
        for (int i = top3; i >= 0; i--){

            cout << "\t    =[ " << Stack3[i] << "]=" << endl;
        }
        cout << "==================================" << endl;
          cout << "======      Tabung - 4      ======";
        cout << "\n==================================" << endl;
        for (int i = top4; i >= 0; i--){

            cout << "\t    =[ " << Stack4[i] << "]=" << endl;
        }
        cout << "==================================" << endl;
    }
}

int main()
{
    int data=5,NoTab;

    cout << "Tabung Pertama\n";
    for (int i=0;i<data;i++)
    {
        push();
    }
    cout << "Tabung Kedua\n";
    for (int i=0;i<data;i++)
    {
        push2();
    }
    cout << "Tabung Ketiga\n";
    for (int i=0;i<data;i++)
    {
        push3();
    }
    start:
    system("cls");
   Print();
       cout << "1.Tabung 1\n";
       cout << "2.Tabung 2\n";
       cout << "3.Tabung 3\n";
       cout << "0. Keluar";
 cout << "\nPilih isi dari Tabung berapa yang Akan Dipindahkan :";cin>>NoTab;
    if(NoTab>4)
        {
            cout << "Pilihan Tidak Tersedia!!";getch();
            goto start;
        }
    switch(NoTab)
    {
        case 1:pop();goto start;
        case 2:pop2();goto start;
        case 3:pop3();goto start;
        case 4:pop4();goto start;
        case 0:default:goto end;
    }
    end:
        system("cls");
    Print();
    cout << "Semua Tabung Sudah Terisi Dengan Data Yang Sesuai!!";

}
