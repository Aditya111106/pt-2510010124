
// UTS Praktikum Paket B: Fotokopi Kampus.
// Lengkapi TODO 1 sampai TODO 6 sesuai lembar soal.
// Bagian yang sudah ada jangan diubah kecuali diminta.

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int HARGA_KECIL = 300;  // 1 sampai 50 halaman
    const int HARGA_SEDANG = 250; // 51 sampai 200 halaman
    const int HARGA_BESAR = 200;  // lebih dari 200 halaman
    const int BATAS_KECIL = 50;
    const int BATAS_SEDANG = 200;
    const int MAKS_HALAMAN = 1000;

    int jumlah = 0;
    cout << "=== Fotokopi Kampus ===\n";
    cout << "Jumlah pesanan: ";
    cin >> jumlah;

    while (cin.fail() || jumlah < 1) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat paling sedikit 1. Jumlah pesanan: ";
        cin >> jumlah;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    int total_halaman = 0;
    int total_pendapatan = 0;
    int banyak_kecil = 0;
    int banyak_sedang = 0;
    int banyak_besar = 0;

    // TODO 5a
    int biaya_terbesar = -1;
    string nama_terbesar;

    for (int i = 1; i <= jumlah; i++) {
        string nama;
        int halaman = 0;
        char warna = ' ';

        cout << "\n--- Pesanan ke-" << i << " dari " << jumlah << " ---\n";

        // TODO 1: Membaca dan memvalidasi nama
        bool nama_sah = false;

        do {
            cout << "Nama pemesan : ";
            getline(cin, nama);

            bool kosong = true;
            bool ada_angka = false;

            for (char c : nama) {
                if (!isspace(static_cast<unsigned char>(c))) {
                    kosong = false;
                }

                if (isdigit(static_cast<unsigned char>(c))) {
                    ada_angka = true;
                }
            }

            if (kosong) {
                cout << "Nama tidak boleh kosong.\n";
            } else if (ada_angka) {
                cout << "Nama tidak boleh mengandung angka.\n";
            } else {
                nama_sah = true;
            }

        } while (!nama_sah);

        // Merapikan nama menjadi Huruf Besar Di Awal Kata
        bool awal_kata = true;

        for (char &c : nama) {
            if (isspace(static_cast<unsigned char>(c))) {
                awal_kata = true;
            } else {
                if (awal_kata) {
                    c = static_cast<char>(
                        toupper(static_cast<unsigned char>(c))
                    );
                    awal_kata = false;
                } else {
                    c = static_cast<char>(
                        tolower(static_cast<unsigned char>(c))
                    );
                }
            }
        }

        // TODO 2: Membaca halaman dengan aman
        cout << "Halaman (1-" << MAKS_HALAMAN << "): ";
        cin >> halaman;

        while (cin.fail() || halaman < 1 || halaman > MAKS_HALAMAN) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus bilangan bulat 1 sampai 1000. Halaman: ";
            cin >> halaman;
        }

        // TODO 3: Membaca warna dan mengubah menjadi huruf besar
        cout << "Berwarna (Y/T): ";
        cin >> warna;

        warna = static_cast<char>(
            toupper(static_cast<unsigned char>(warna))
        );

        while (warna != 'Y' && warna != 'T') {
            cin.ignore(1000, '\n');
            cout << "Hanya Y atau T. Berwarna (Y/T): ";
            cin >> warna;

            warna = static_cast<char>(
                toupper(static_cast<unsigned char>(warna))
            );
        }

        cin.ignore(1000, '\n');

        // TODO 4: Menentukan harga dan menghitung biaya
        int harga = 0;
        int biaya = 0;

        if (halaman <= BATAS_KECIL) {
            harga = HARGA_KECIL;
            banyak_kecil++;
        } else if (halaman <= BATAS_SEDANG) {
            harga = HARGA_SEDANG;
            banyak_sedang++;
        } else {
            harga = HARGA_BESAR;
            banyak_besar++;
        }

        biaya = halaman * harga;

        if (warna == 'Y') {
            biaya *= 2;
        }

        cout << "  " << left << setw(16) << nama
             << right << setw(6) << halaman;

        if (warna == 'Y') {
            cout << setw(7) << "Warna";
        } else {
            cout << setw(7) << "Hitam";
        }

        cout << setw(9) << biaya << "\n";

        total_halaman += halaman;
        total_pendapatan += biaya;

        // TODO 5b: Memperbarui biaya terbesar
        if (biaya > biaya_terbesar) {
            biaya_terbesar = biaya;
            nama_terbesar = nama;
        }
    }

    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah pesanan    : " << jumlah << "\n";
    cout << "Total halaman     : " << total_halaman << "\n";
    cout << "Total pendapatan  : " << total_pendapatan << "\n";
    cout << "Rata-rata halaman : "
         << static_cast<double>(total_halaman) / jumlah << "\n";

    // TODO 5c: Mencetak pesanan dengan biaya terbesar
    cout << "Terbesar          : "
         << nama_terbesar << " (" << biaya_terbesar << ")\n";

    cout << "\nSebaran ukuran pesanan:\n";

    // TODO 6: Sebaran ukuran pesanan menggunakan perulangan bersarang
    string label[] = {"Kecil", "Sedang", "Besar"};
    int banyak[] = {
        banyak_kecil,
        banyak_sedang,
        banyak_besar
    };

    for (int i = 0; i < 3; i++) {
        cout << left << setw(7) << label[i] << "| ";

        for (int j = 0; j < banyak[i]; j++) {
            cout << "#";
        }

        cout << " " << banyak[i] << "\n";
    }

    return 0;
}
