#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define n 10
using namespace std;

int PIL, F, R;
char PILIHAN[1], HURUF;
char Q[n];

void Inisialisasi() {
    F = 0;
    R = -1;
}

bool isFull() {
    return R == n - 1;
}

bool isEmpty() {
    return F > R;
}

void INSERT() {
    if (isFull()) {
        cout << "Queue Penuh!" << endl;
    } else {
        cout << "Masukkan 1 huruf: ";
        cin >> HURUF;
        R++;
        Q[R] = HURUF;
        cout << "Data '" << HURUF << "' berhasil dimasukkan ke dalam queue!" << endl;
    }
}

void DELETE() {
    if (isEmpty()) {
        cout << "Queue Kosong!" << endl;
    } else {
        cout << "Data '" << Q[F] << "' telah dihapus dari queue" << endl;
        F++;
        if (isEmpty()) {
            Inisialisasi();
            cout << "Queue telah direset" << endl;
        }
    }
}

void CETAKLAYAR() {
    if (isEmpty()) {
        cout << "Queue Kosong!" << endl;
    } else {
        cout << "Isi Queue: ";
        for (int i = F; i <= R; i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
        cout << "Front: " << front << ", Rear: " << rear << endl;
    }
}

int main() {
    Inisialisasi();
    do {
        cout << "QUEUE" << endl;
        cout << "===============" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK QUEUE" << endl;
        cout << "4. QUIT" << endl;
        cout << "PILIHAN : ";
        cin >> PILIHAN;
        PIL = atoi(PILIHAN);

        switch (PIL) {
            case 1:
                INSERT();
                break;
            case 2:
                DELETE();
                break;
            case 3:
                CETAKLAYAR();
                break;
            default:
                cout << "TERIMA KASIH" << endl;
                break;
        }

        cout << "Press any key to continue..." << endl;
        getch();
        system("cls");
    } while (PIL < 4);
    return 0;
}

