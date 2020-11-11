#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float idr,usd,hasil;
    cout<<"Masukan Jumalah Rupiah anda : ";
    cin>> idr;
    usd=9600;
    hasil = idr/usd;
    cout<<"hasil jika di konversi ke USD:  $"<<setprecision(3)<<hasil;;
    return 0;


}
