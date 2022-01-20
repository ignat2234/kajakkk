#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Podaj liczbe elementow tablic: " << endl;
    cout << "n = ";
    cin >> n;

    double *wsk;
    wsk = new double[n];

    cout << "Podaj wartosci " << n << " elementow tablicy: " << endl;
    for (int i=0;i<n;i++){
        cout << " tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }

    double suma{0};

    for (int i=0;i<n;i++)
        suma += *(wsk + i);

    delete[] wsk;

    cout << "Suma elementow tablicy wynosi: " << suma << endl;


    return 0;
}