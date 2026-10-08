#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << a << " dibagi " << b << " adalah "
         << a / b << " sisa " << a % b << endl;

    return 0;
}