#include <iostream>
using namespace std;

const int MAX = 100;
string piring[MAX];
int topIdx = -1;

bool isEmpty() {
    return topIdx == -1;
}

bool isFull() {
    return topIdx == MAX - 1;
}

void push(string namaPiring) {
    if (isFull()) {
        cout << "Tumpukan piring penuh!\n";
        return;
    }
    piring[++topIdx] = namaPiring;
    cout << "Piring \"" << namaPiring << "\" berhasil ditambahkan ke tumpukan.\n";
}

void pop() {
    if (isEmpty()) {
        cout << "Tidak ada piring di tumpukan (kosong)!\n";
        return;
    }
    cout << "Piring \"" << piring[topIdx--] << "\" diambil dari tumpukan.\n";
}

void peek() {
    if (isEmpty()) {
        cout << "Tumpukan kosong, tidak ada piring di atas.\n";
        return;
    }
    cout << "Piring paling atas adalah: \"" << piring[topIdx] << "\"\n";
}

void display() {
    if (isEmpty()) {
        cout << "Tumpukan kosong.\n";
        return;
    }
    cout << "Isi tumpukan piring (atas ke bawah): ";
    for (int i = topIdx; i >= 0; --i) {
        cout << "[" << piring[i] << "] ";
    }
    cout << "\n";
}

int main() {
    int pilih;
    string nama;
    do {
        cout << "\n=== SIMULASI TUMPUKAN PIRING ===\n";
        cout << "1. Tambahkan piring (Push)\n";
        cout << "2. Ambil piring (Pop)\n";
        cout << "3. Lihat piring paling atas (Peek)\n";
        cout << "4. Lihat semua piring (Display)\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "Masukkan nama/jenis piring: ";
                cin >> nama;
                push(nama);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilih != 5);

    return 0;
}
