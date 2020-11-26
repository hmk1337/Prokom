#include<iostream>
using namespace std;

int faktorial(int bil,int hasil){
    if(bil == 0){
        cout<<'=';
        return hasil;
    }
    else{
        hasil*=bil;
        cout<<bil;
        if(bil != 1)
            cout<<'*';
        faktorial(bil-1,hasil);
    }

   
}

int main(){
    int bil,hasil=1;
    cout<<"Masukan bilangan = ";
    cin>>bil;
    cout<<"Hitung nilai factorial "<<bil<<" = ";
    cout<<faktorial(bil,hasil);
    return 0;
}
