#include <iostream>
using namespace std;

int main (){

    string nama;
    int nim;
    double nilaitugas,nilaiuts,nilaiuas,nilaipraktek,nilaitotal;

    cout<<"Masukan Nama Mahasiswa = ";
    cin>>nama;
    cout<<"Masukan Nim = ";
    cin>>nim;
    cout<<"Masukan Nilai Tugas = ";
    cin>>nilaitugas;
    cout<<"Masukan Nilai UTS = ";
    cin>>nilaiuts;
    cout<<"Masukan Nilai UAS = ";
    cin>>nilaiuas;
    cout<<"Masukan Nilai Praktek = ";
    cin>>nilaipraktek;


    nilaitotal = (0.1 * nilaitugas) + (0.25 * nilaiuts) + (0.35 * nilaiuas) + (0.3 * nilaipraktek);

    if (nilaitotal > 75 && nilaitotal <= 100){
        cout<<"A";
    }
    else if (nilaitotal < 75){
        cout<<"AB";
    }
    else if (nilaitotal < 70){
        cout<<"B";
    }
    else if (nilaitotal < 65){
        cout<<"BC";
    }
    else if (nilaitotal < 60){
        cout<<"C";
    }
    else if (nilaitotal < 55){
        cout<<"D";
    }
    else if (nilaitotal < 40 && nilaitotal > 0){
        cout<<"E";
    }
}
