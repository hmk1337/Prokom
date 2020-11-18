#include <iostream>
using namespace std;

int main() {
int nilai;
cout << "Masukan Nilai Anda = ";
cin >> nilai;

if ((nilai>=85)  && (nilai<=100))
    {
        cout<<"Nilai anda A";
    }
   else if ((nilai<85)  && (nilai>=70))
    {
        cout<<"Nilai anda B";
    }
    else if ((nilai<=69)  && (nilai>=40))
    {
        cout<<"Nilai anda C";
    }
    else if  ((nilai>=20)  && (nilai<=39))
    {
        cout<<"Nilai anda D";
    }
    else if (nilai<=19)
    {
        cout<<"Nilai anda E";
    }

    return 0;

}
