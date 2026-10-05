#include <iostream>
using namespace std;

int main() {
    double nilai1, nilai2, nilai3, nilai4, nilai5;
    double Ratarata;

    cout << "Masukkan nilai 1: ";
    cin >> nilai1;

    cout << "Masukkan nilai 2: ";
    cin >> nilai2;

    cout << "Masukkan nilai 3: ";
    cin >> nilai3;

    cout << "Masukkan nilai 4: ";
    cin >> nilai4;

    cout << "Masukkan nilai 5: ";
    cin >> nilai5;

    Ratarata = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5) / 5;

    cout << "Rata-rata = " << Ratarata << endl;

    return 0;
}
