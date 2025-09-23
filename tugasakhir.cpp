#include <iostream>
using namespace std;

#define MAX 10   // kapasitas maksimal antrian

class Antrian {
private:
    int front, rear;      // penanda awal & akhir antrian
    int data[MAX];        // array 1 dimensi untuk menyimpan nomor antrian

public:
    Antrian() {
        front = -1;
        rear = -1;
    }

    // cek apakah antrian penuh
    bool isFull() {
        return (rear == MAX - 1);
    }

    // cek apakah antrian kosong
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // tambah pasien ke antrian
    void enqueue(int nomor) {
        if (isFull()) {
            cout << "Antrian penuh! Tidak bisa menambah nomor baru.\n";
        } else {
            if (front == -1) front = 0;  // inisialisasi front
            rear++;
            data[rear] = nomor;
            cout << "Nomor antrian " << nomor << " berhasil ditambahkan.\n";
        }
    }

    // panggil pasien berikutnya
    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong! Tidak ada pasien yang bisa dipanggil.\n";
        } else {
            cout << "Pasien dengan nomor antrian " << data[front] << " dipanggil.\n";
            front++;
        }
    }

    // tampilkan daftar antrian
    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
        } else {
            cout << "Nomor antrian yang sedang menunggu: ";
            for (int i = front; i <= rear; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Antrian antrian;
    int pilih, nomor = 1; // nomor mulai dari 1

    do {
        cout << "\n=== SISTEM ANTRIAN RUMAH SAKIT ===\n";
        cout << "1. Tambah Pasien \n";
        cout << "2. Panggil Pasien \n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                antrian.enqueue(nomor++);
                break;
            case 2:
                antrian.dequeue();
                break;
            case 3:
                antrian.display();
                break;
            case 4:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Menu tidak valid!\n";
        }
    } while (pilih != 4);

    return 0;
}
