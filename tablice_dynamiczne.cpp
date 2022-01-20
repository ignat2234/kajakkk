#include <iostream>

using namespace std;
int main()
{
    int n;
    double *wsk, *wsk2;

    cout << "Podaj liczbe elementow tablicy: " << endl;
    cout << "n = ";
    cin >> n;

    wsk = new double[n];
    wsk2 = new double[n];//mozemy okreslic rozmiar tablicy w trakcie wykonywaniu programu, nie mamy nazwy tablicy
    //rezerwujemy pamięć na stercie
    for(int i=0;i<n;i++)
    {
        cout << "Podaj elementy tablicy" << endl;
        cin >> *(wsk+i);
    }

    for(int i=0;i<n;i++)
    {
        cout << "Podaj elementy 2 tablicy" << endl;
        cin >> *(wsk2+i);
    }

    int max = 0;
    int max2 = 0;

    //int max = *(wsk);

    for(int i=0;i<n;i++)
    {
        if(*(wsk + i)>max)
        max=*(wsk+i);
        if(*(wsk2 + i)>max2)
        max2=*(wsk2+i);
    }


    delete[] wsk;
    delete[] wsk2;
    cout << max;
    return 0;

}