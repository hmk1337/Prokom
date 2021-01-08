#include <iostream>
#include <math.h>
using namespace std;

void konversiDesimal(int bin)
{
    int sisa,hasil;
    hasil=0;
    int pangkat=0;
    while(bin>=1)
    {
        sisa=bin%2;
        hasil+=sisa*pow(2,pangkat);
        bin=bin/10;
        pangkat++;
    }
    cout<<hasil<<endl;
}

int main(){
    int bin;
    cout<<"Masukan Bilangan Biner = ";
    cin>>bin;
    cout<<"Hasil Konversi    = ";
    konversiDesimal(bin);
}
