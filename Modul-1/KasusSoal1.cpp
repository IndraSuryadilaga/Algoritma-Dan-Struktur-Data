#include <iostream>
using namespace std;

int main() {
    char huruf;
    string kata;
    int angka;

    // Input data
    cout << "Masukkan sebuah huruf = "; cin >> huruf;
    cin.ignore(); // Mengatasi masalah input buffer
    cout << "Masukkan sebuah kata = ";getline(cin, kata);
    cout << "Masukkan sebuah angka = ";cin >> angka;

    // Output hasil
    cout << "\nHuruf yang Anda masukkan adalah " << huruf << endl;
    cout << "Kata yang Anda masukkan adalah " << kata << endl;
    cout << "Angka yang Anda masukkan adalah " << angka << endl;
    return 0;
}
