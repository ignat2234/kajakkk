#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    vector <int> wektor;
    cout << "Podaj ile elementow" << endl;
    int elementy =0;
    cin >> elementy;
    int a;
    for (int i =0; i < elementy; i++) {
        cout << "Podaj element " << i << endl;
        cin >> a;
        wektor.push_back(a);
    }

    for (int i =0; i < elementy; i++) {
        cout << "Element: " << i << ": " << wektor[i] << endl;
    }

    return 0;
}