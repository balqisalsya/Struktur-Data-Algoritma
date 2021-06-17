#include <iostream>

using namespace std;

const int panjangantrian = 7;
struct queue
{
int top; 
string tmp[panjangantrian];
} antri;

void createQueue() {
    antri.top = 0; // queue dalam keadaan kosong
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

void masukanData(string data){
if(isFully()==1){
    cout <<"Antrian sudah penuh, silahkan untuk kembali besok" <<endl;
}
else {
    antri.tmp[antri.top]= data;
    cout <<"Data "<< antri.tmp[antri.top] << " Sudah masuk kedalam antrian" <<endl;
    antri.top++;
    }
}

void tampilkan()
{
    int i = 0; //bernilai 1
    for (int i = antri.top - 1; i >= 0; i--)
        {
            cout << antri.tmp[i] << " ";
        }
        i++;
}


int main() {
    createQueue();
    masukanData("9");
    masukanData("10");
    tampilkan();
}