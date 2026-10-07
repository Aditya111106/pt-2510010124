#include <iostream>
#include <string>
using namespace std;

// Bobot penilaian
const double BOBOT_KEHADIRAN = 0.10;
const double BOBOT_MINGGUAN = 0.20;
const double BOBOT_UTS = 0.30;
const double BOBOT_UAS = 0.40;

int main() {
    string nama;
    string npm;

    double kehadiran;
    double mingguan;
    double uts;
    double uas;

    // Input data
    cout << "Masukkan nama : ";
    getline(cin, nama);

    cout << "Masukkan NPM : ";
    getline(cin, npm);

    cout << "Masukkan nilai kehadiran : ";
    cin >> kehadiran;

    cout << "Masukkan nilai mingguan : ";
    cin >> mingguan;

    cout << "Masukkan nilai UTS : ";
    cin >> uts;

    cout << "Masukkan nilai UAS : ";
    cin >> uas;

    // Menghitung nilai akhir
    double nilai_akhir = kehadiran * BOBOT_KEHADIRAN
                       + mingguan * BOBOT_MINGGUAN
                       + uts * BOBOT_UTS
                       + uas * BOBOT_UAS;

    // Menentukan huruf mutu
    string huruf_mutu;

    if (nilai_akhir >= 80) {
        huruf_mutu = "A";
    }
    else if (nilai_akhir >= 70) {
        huruf_mutu = "B";
    }
    else if (nilai_akhir >= 60) {
        huruf_mutu = "C";
    }
    else if (nilai_akhir >= 50) {
        huruf_mutu = "D";
    }
    else {
        huruf_mutu = "E";
    }

    // Menentukan status kelulusan
    bool lulus;

    if (nilai_akhir >= 60) {
        lulus = true;
    }
    else {
        lulus = false;
    }

    // Menentukan keterangan
    string keterangan;

    switch (huruf_mutu[0]) {
        case 'A':
            keterangan = "Sangat baik";
            break;

        case 'B':
            keterangan = "Baik";
            break;

        case 'C':
            keterangan = "Cukup";
            break;

        case 'D':
            keterangan = "Kurang";
            break;

        case 'E':
            keterangan = "Sangat kurang";
            break;
    }

    // Menampilkan kartu nilai
    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama : " << nama << "\n";
    cout << "NPM : " << npm << "\n";
    cout << "Nilai akhir : " << nilai_akhir << "\n";
    cout << "Huruf mutu : " << huruf_mutu << "\n";
    cout << "Keterangan : " << keterangan << "\n";

    if (lulus) {
        cout << "Status : Lulus\n";
    }
    else {
        cout << "Status : Belum lulus\n";
    }

    return 0;
}
