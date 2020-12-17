#include <iostream>
using namespace std;

void berputar(){ // Robot keluar lintasan
    cout << "Berputar";
}

void b_kiri45(){ // Robot diujung kanan
    cout << "Belok kiri 45";
}

void b_kiri30(){ // Robot diujung kanan
    cout << "Belok kiri 30";
}

void b_kiri15(){ // Robot diujung kanan
    cout<<" Belok kiri 15";
}

void lurus(){ // Robot di tengah
    cout<<"Lurus";
}

void b_kanan15(){ // Robot diujung kiri
    cout<<"Belok kanan 15";
}

void b_kanan30(){ // Robot diujung kiri
    cout<<"Belok kanan 30";
}

void b_kanan45(){ // Robot diujung kiri
    cout<<"Belok kanan 45";
}

int main() {
    int nilai_sensor;
    cout << "Masukan Nilai sensor = ";
    cin >> nilai_sensor;
    if (nilai_sensor == 0)
    {
        berputar();
    }
    else if(nilai_sensor == 16)
    {
        b_kiri45();
    }
    else if(nilai_sensor == 24)
    {
        b_kiri30();
    }
    else if(nilai_sensor == 28)
    {
        b_kiri15();
    }
    else if(nilai_sensor == 14)
    {
        lurus();
    }
    else if(nilai_sensor == 7)
    {
        b_kanan15();
    }
    else if(nilai_sensor == 3)
    {
        b_kanan30();
    }
    else if(nilai_sensor == 1)
    {
        b_kanan45();
    }
}
