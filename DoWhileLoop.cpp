#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int total = 0;

    do {
        cin >> pilihan;
        total++;
        cout << "1. Mulai" << endl;
        cout << "2. Keluar" << endl;
    } while (pilihan != 0);

    cout << "Total: " << total << endl;
    return 0;
}