
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, npm;
    double kehadiran, mingguan, uts, uas;

    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);

    cout << "NPM       : ";
    cin >> npm;

    cout << "Kehadiran : ";
    cin >> kehadiran;

    cout << "Mingguan  : ";
    cin >> mingguan;

    cout << "UTS       : ";
    cin >> uts;

    cout << "UAS       : ";
    cin >> uas;

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << '\n';
    cout << "NPM       : " << npm << '\n';
    cout << "Kehadiran : " << kehadiran << '\n';
    cout << "Mingguan  : " << mingguan << '\n';
    cout << "UTS       : " << uts << '\n';
    cout << "UAS       : " << uas << '\n';

    return 0;
}