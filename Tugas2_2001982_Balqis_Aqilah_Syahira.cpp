#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

struct tiket

{ int jumlah,harga,total_harga;
 };

tiket transaksi;
transaksi.harga = 50000;

{
cout<<"   Data Penjualan Tiket\n";
cout<<"  Milea:Suara dari Dilan\n";
cout<<"-----------------------------\n";
cout<<endl;
cout<<"Jumlah tiket : ";
cin>>transaksi.jumlah;
cout<<endl;
int total,disc;
if(transaksi.jumlah <5)
    {
        total = transaksi.harga * transaksi.jumlah;
transaksi.total_harga = total;    }
else if(transaksi.jumlah >= 5 && transaksi.jumlah <10)
    { cout<<"Mendapat potongan senilai 10%";    cout<<endl;
        total = transaksi.harga * transaksi.jumlah;
disc = total*0.1;
transaksi.total_harga = total - disc;
}
else if(transaksi.jumlah>=10)
    {    total = transaksi.harga * transaksi.jumlah;    transaksi.total_harga = total;    }
if(transaksi.jumlah>=10)
    {
cout<<"Mendapatkan bonus 1 tiket";    cout<<endl;   }
else
    {    cout<<"Harga Per-tiket Rp. 50000 x "<<transaksi.jumlah<<endl;  }
cout<<"Total Pembayran : Rp. "<<transaksi.total_harga;
cout<<endl;
 }





}
