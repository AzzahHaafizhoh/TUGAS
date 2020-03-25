#include <iostream>
using namespace std;

string nama, kelas, npm;

int main()
{
    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Kelas: ";
    cin >> kelas;
    cout << "Masukan NPM  : ";
    cin >> npm;

    cout << "\n";
    cout << "DATA MAHASISWA";
    cout << "\nNama   : " <<nama;
    cout << "\nKelas  : " <<kelas;
    cout << "\nNPM    : " <<npm;
    cout << "\n";

    return 0;

}
