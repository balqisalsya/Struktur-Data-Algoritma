#include <iostream>
using namespace std;

struct barang {

    string namabarang;
    int jumlahbarang,kodebarang;
};


int main(){
    int* data = NULL;
    int jumlahdata,i;
    cout <<"Masukkan jumlah data : ";
    cin>>jumlahdata;
    barang *jumlahdatabarang = new barang[jumlahdata];

    for (i = 0; i < jumlahdata; i++)
    {
        cout <<endl;
        cout <<"Nama Barang "<<i+1<<" : ";
        cin>>jumlahdatabarang[i].namabarang;
        cout <<"Jumlah Barang "<<i+1<<" : ";
        cin>>jumlahdatabarang[i].jumlahbarang;
        cout <<"Kode Barang "<<i+1<<" : ";
        cin>>jumlahdatabarang[i].kodebarang;
        cout<<endl;

    }
    cout<<"\nData Barang\n";
    cout<<"No\tNama Barang\tJumlah Barang\tKode Barang\n";
    for (int i=0; i<jumlahdata; i++)
    {
        cout<<i+1<<"\t"<<jumlahdatabarang[i].namabarang<<"\t\t";
        cout<<jumlahdatabarang[i].jumlahbarang<<"\t\t";
        cout<<jumlahdatabarang[i].kodebarang<<"\n";
    }




}


