
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Bilangan terbesar: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Bilangan terbesar: " << b << endl;
    } else {
        cout << "Bilangan terbesar: " << c << endl;
    }

    return 0;
}
