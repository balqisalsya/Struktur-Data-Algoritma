#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
#define Maxs 150

struct susunan{
       char Isi[Maxs];
       int Atas;
       }s;

void PUSH(char x){
     if(s.Atas==Maxs){
                      cout<<"Stack Penuh";
                      getch();}
                      else
                    {
                        s.Atas=s.Atas+1;
                        s.Isi[s.Atas]=x; }
                            }
char POP(){
     char hasil;
     if(s.Atas==0){
                   cout<<"Stack kosong";
                   hasil=' ';
                   }
                   else{
                        hasil=s.Isi[s.Atas];
                        s.Atas=s.Atas-1;
                        }
                        return hasil;
     }
int main(){
char kalimat[Maxs];
s.Atas=0;

cout<<"Masukan Kalimat: ";cin.getline(kalimat,150);

for(int i=0; i<strlen(kalimat); i++){

        PUSH(kalimat[i]);
        }
       cout<<"Kalimat Setelah Dibalik: ";
for(int i=0; i<strlen(kalimat); i++){

        cout<<POP();
        }
getch();
}