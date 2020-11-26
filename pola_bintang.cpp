#include <iostream>
using namespace std;
int main()
{
    int  i, j, n;
    cout << "Masukkan jumlah baris:  ";
    cin >> n;
    cout <<"Pola 1 "<<endl;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << "\n";



    }

    cout <<"Pola 2"<<endl;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
