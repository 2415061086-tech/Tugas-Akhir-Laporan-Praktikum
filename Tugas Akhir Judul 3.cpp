#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    int harga[x] = {15000, 12000, 18000, 15000, 25000, 10000, 15000, 30000, 12000, 18000};
    int target;
    int i = 0;
    int counter = 0;

    cout << "=== Program Pencarian Harga Barang (Sequential Search) ===" << endl;
    cout << "Daftar harga barang: ";
    for (int j = 0; j < x; j++) {
        cout << harga[j] << " ";
    }

    cout << "\n\nMasukkan harga barang yang ingin dicari: ";
    cin >> target;

    while (i < x) {
        if (harga[i] == target) {
            counter++;
        }
        i++;
    }

    if (counter > 0) {
        cout << "Harga " << target << " ditemukan sebanyak " << counter << " kali." << endl;
    } else {
        cout << "Harga " << target << " tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}
