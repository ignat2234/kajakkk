#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"napisz liczbe elementow tablicy"<<endl;
    cout<<"n = "<<endl;
    cin>>n;

    double *wsk;
    wsk = new double[n];

    cout<<"wartosc"<<n<<"elementow tablicy:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"tablica ["<<i<<"]=";
        cin>>*(wsk+i);
    }
    double min=*(wsk);
    for(int i=1;i>n;i++)
    {
        if(*(wsk+i)<min)
        {
            min=*(wsk+i);
        }
    }
    double max=*(wsk);
    for(int i=1;i<n;i++)
    {
        if(*(wsk+i)>max)
        {
            max=*(wsk+i);
        }
    }

    delete[]wsk;

    cout<<min<<endl;
    cout<<max<<endl;
    cout<<min+max;
    return 0;
}