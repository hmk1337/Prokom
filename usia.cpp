#include <iostream>
using namespace std;

int main() {
    int tahun;
    char nama[20];
    // Fix inputan nama agar bisa terinput dengan spasi
    cout << "Masukan Nama Anda = ";cin.getline(nama,20);
    cout << "Masukan tahun Anda = "; cin>>tahun;


    if ((tahun >= 2019) && (tahun <=2020))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Bayi"<<endl;

    }
    else if ((tahun < 2019) && (tahun >= 2017))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Batita"<<endl;
    }
    else if ((tahun <2017) && (tahun >= 2015))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Balita"<<endl;
    }
    else if ((tahun < 2015) && (tahun >= 2008))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Anak-Anak"<<endl;
    }
    else if ((tahun < 2008) && (tahun >= 2003))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Remaja"<<endl;
    }
    else if ((tahun < 2003) && (tahun >= 1990))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Pemuda"<<endl;
    }
    else if ((tahun < 1990) && (tahun >= 1960))
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Dewasa"<<endl;
    }
    else if (tahun < 1960)
    {
        cout<<"Nama: "<<nama<<endl;
        cout<<"Status: "<<"Lansia"<<endl;
    }
    return 0;

}

