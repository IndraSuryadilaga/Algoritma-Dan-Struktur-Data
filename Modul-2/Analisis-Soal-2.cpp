#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

const int max_stack = 10;
string PILIHAN, data;
int PIL;

struct Stack {
    int atas;
    string data[max_stack];
} Tumpuk;

int penuh() {
    if (Tumpuk.atas == max_stack - 1)
        return 1;
    else
        return 0;
}

int kosong() {
    if (Tumpuk.atas == -1)
        return 1;
    else
        return 0;
}

void input()
{
    if (penuh() == 0){
        cout << "Masukkan data: ";
        cin >> data;
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
    }else if (penuh() == 0) {
        cout << "Masukkan data: ";
        cin >> data;
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " masuk ke stack\n";
    }
    else
        cout << "Tumpukan Penuh" << endl;
}


void hapus() {
    if (kosong() == 0) {
        cout << "Data \"" << Tumpuk.data[Tumpuk.atas] << "\" teratas sudah terambil\n";
        Tumpuk.atas--;
    }
    else {
        cout << "Data kosong\n";
    }
}

void tampil() {
    if (kosong() == 0) {
        for (int i = Tumpuk.atas; i >= 0; i--) {
            cout << "Tumpukan ke-" << i << " = \"" << Tumpuk.data[i] << "\"" << endl;
        }
    }
    else {
        cout << "Tumpukan kosong\n";
    }
}

void bersih() {
    Tumpuk.atas = -1;
    cout << "Tumpukan kosong!\n";
}

int main() {
    Tumpuk.atas = -1;
    do {
        cout << "STACK" << endl;
        cout << "===============" << endl;
        cout << "1. Input" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Cetak stack" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan : ";
        cin >> PILIHAN;
        PIL = stoi(PILIHAN);

        switch (PIL) {
            case 1:
                input();
                break;
            case 2:
                hapus();
                break;
            case 3:
                tampil();
                break;
            case 4:
                cout << "TERIMA KASIH" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }
        cout << "Press any key to continue..." << endl;
        getch();
        system("cls");
    } while (PIL != 4);
    return 0;
}
