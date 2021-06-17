#include <iostream>
#include <string>
using namespace std;

int main (void)  {
    char *firstname = "nama depan";
    string *lastname = nullptr;
    cout <<"namabelakang : ";
    cout << *firstname << *lastname << endl;

    return 0;
}