#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    int harga[n];
    cout << "Masukkan harga masing-masing barang:\n";
    for (int i = 0; i < n; i++) {
        cout << "Harga barang ke-" << i + 1 << ": ";
        cin >> harga[i];
    }

    // Proses Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (harga[j] > harga[j + 1]) {
                // Tukar posisi
                int temp = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = temp;
            }
        }
    }

    cout << "\nDaftar harga barang setelah diurutkan (termurah ke termahal):\n";
    for (int i = 0; i < n; i++) {
        cout << "Rp" << harga[i] << endl;
    }

    return 0;
}
