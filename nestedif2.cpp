#include <iostream>
using namespace std;
int main()
{
    cout << "Penerimaan Kru Kapal" << endl;
    int tinggi, berat, umur;
    cout << "\nMasukkan umur :";
    cin >> umur;
    cout << "\nMasukkan data berat badan :";
    cin >> berat;
    cout << "\nMasukkan data tinggi badan :";
    cin >> tinggi;

    if (umur > 17)
    {
        if (berat < 100)
        {
            if (tinggi > 170)
            {
                cout << "\nSelamat kamu berhasil lolos" << endl;
            }
            else
            {
                cout << "\nMaaaf tinggi anda kurang" << endl;
            }
        }
        else
        {
            cout << "\nMaaf berat badan anda melebihi berat yang ditentukan" << endl;
        }
    }
    else
    {
        cout << "\nMaaf umur anda kurang" << endl;
    }
}