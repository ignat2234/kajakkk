#include <iostream>

using namespace std;
union student{
    char imie;
    int ocena;
};

int main() {
    student uczen;
    uczen.ocena = 4;
    uczen.imie = 3;
    cout << sizeof(student) << endl;
   // cout << uczen.ocena;
    // wypisze 5 bo jest wpizana ostatnia z union

    return 0;
}