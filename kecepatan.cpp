#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float v,s,t;
    cout<<"Masukan Jarak tempuh Anda (Km) : ";
    cin>> s;
    cout<<"Masukan Kecepatan anda (Km/jam)  :  ";
    cin>> v;
    t=s/v;
    cout<<"Waktu Tempuh (Jam)         :"<<setprecision(3)<<t;
    return 0;


}
