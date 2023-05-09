#include <iostream>
#include <vector>

using namespace std;

void movezero(vector<int>& angka) {
    int i = 0, j = angka.size() - 1;
    while (i < j) {
        if (angka[i] != 0) {
            swap(angka[i], angka[j]);
            j--;
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    vector<int> angka(n);
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> angka[i];
    }
    movezero(angka);
    for (int i = 0; i < angka.size(); i++) {
        cout << angka[i] << " ";
    }
    return 0;
}