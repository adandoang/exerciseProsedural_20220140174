#include <iostream>
#include <string>

using namespace std;

float hitung_rata_rata(float a, float b) {
    return (a + b) / 2;
}

int main() {
    int jumlah_diterima = 0;
    int jumlah_ditolak = 0;

    struct Pendaftar {
        string nama;
        string status;
    } pendaftar[20];

    for (int i = 0; i < 20; i++) {
        string nama;
        float nilai_matematika;
        float nilai_bahasa_inggris;

        cout << "Masukkan nama kandidat: ";
        getline(cin, nama);

        cout << "Masukkan nilai matematika: ";
        cin >> nilai_matematika;

        cout << "Masukkan nilai bahasa Inggris: ";
        cin >> nilai_bahasa_inggris;

        float rata_rata = hitung_rata_rata(nilai_matematika, nilai_bahasa_inggris);

        if (rata_rata >= 70 || nilai_matematika > 80) {
            pendaftar[i].nama = nama;
            pendaftar[i].status = "diterima";
            jumlah_diterima++;
        }
        else {
            pendaftar[i].nama = nama;
            pendaftar[i].status = "ditolak";
            jumlah_ditolak++;
        }

        cin.ignore();
    }

    for (int i = 0; i < 20; i++) {
        cout << pendaftar[i].nama << " " << pendaftar[i].status << endl;
    }

    cout << "Jumlah kandidat yang diterima: " << jumlah_diterima << endl;
    cout << "Jumlah kandidat yang tidak diterima: " << jumlah_ditolak << endl;

    return 0;
}
