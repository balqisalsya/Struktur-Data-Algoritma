#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int matriks1[3][2] = {{4, 5},{5, 6},{2, 3}};
    int matriks2[3][2] = {{3, 2},{3, 1},{6, 5}};
    cout << "Penjumlahan 2 matriks"<<endl;
    cout <<" "<<endl;
    cout << "Matriks 1"<<endl;
    cout << " "<<endl;
    for (i=0; i<3; i++)
    {
    	cout << "[ ";
        for (j=0; j<2; j++)
        {
			cout << matriks1[i][j] <<" ";
        }
        cout << "]" << endl;
    }
    cout << endl;
    cout << "Matriks 2"<<endl;
    cout << " "<<endl;
    for (i=0; i <3; i++)
    {
    	cout << "[ ";
        for (j=0; j<2; j++)
        {
            cout << matriks2[i][j] <<" ";
        }
        cout << "]"<< endl;
    }
    int hasil[i][j];
    cout << " "<<endl;
    cout << "Matriks 1 + Matriks 2 =" <<endl;
    cout << " "<<endl;
    for (i=0; i<3; i++)
    {
    	cout << "[ ";
        for (j=0; j<2; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] <<" ";
        }
        cout << "]" << endl;


    }
    return 0;
}
