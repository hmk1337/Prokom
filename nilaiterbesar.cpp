#include <iostream>

using namespace std;
int main()

{
    int bilangan1,bilangan2,bilangan3,terbesar;
    cout<<"Masukan Bilangan 1 : ";
    cin>>bilangan1;
    cout<<"Masukan Bilangan 2 : ";
    cin>>bilangan2;
    cout<<"Masukan Bilangan 3 : ";
    cin>>bilangan3;

    {if (bilangan1>bilangan2)
        terbesar=bilangan1;
    else
        terbesar=bilangan2;
    if (bilangan3>terbesar)
        terbesar=bilangan3;
    cout<<endl;
    cout<<"Nilai Terbesar = "<<terbesar;cout<<endl;}
    return  0;
}
