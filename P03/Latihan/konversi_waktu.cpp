#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    jam = detik / 3600;
    sisa = detik % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;

    cout << jam << " jam "
         << menit << " menit "
         << sisa << " detik" << endl;

    return 0;
}