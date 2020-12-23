#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main (){
	int pilihan,aritmatika,logika,a,b,c,d;
	
	menu:
		cout<<"\n";
		cout<<"===================\n";
		cout<<"    MENU PILIHAN   \n";
		cout<<"===================\n";
		cout<<"\n";
		cout<<"[1] Aritmatika"<<endl;
		cout<<"[2] Logika"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>pilihan;
	switch (pilihan){
	 case 1 :
	 	cout<<"===================\n";
		cout<<"     Aritmatika    \n";
		cout<<"===================\n";
		cout<<"\n";
		cout<<"[1] Penjumlahan"<<endl;
		cout<<"[2] Pengurangan"<<endl;
		cout<<"[3] Perkalian"<<endl;
		cout<<"[2] Pembagian"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>aritmatika;
	}
	switch (aritmatika){
	 case 1 :
	 	cout<<"====================\n";
		cout<<"     PENJUMLAHAN    \n";
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c=a+b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Penjumlahan kedua bilangan = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	case 2 :
	 	cout<<"====================\n";
		cout<<"     PENGURANGAN    \n";
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c=a-b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Pengurangan kedua bilangan = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	case 3 :
	 	cout<<"====================\n";
		cout<<"      PERKALIAN     \n";
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c=a*b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Perkalian kedua bilangan = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	case 4 :
	 	cout<<"====================\n";
		cout<<"      PEMBAGIAN     \n";
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c=a/b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Pembagian kedua bilangan = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	}
	switch (pilihan){
	 case 2 :
	 	cout<<"===================\n";
		cout<<"       Logika      \n";
		cout<<"===================\n";
		cout<<"\n";
		cout<<"[1] Logika AND"<<endl;
		cout<<"[2] Logika OR"<<endl;
		cout<<"[3] Logika XOR"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>logika;
	}
	switch (logika){
	case 1 :
	 	cout<<"=====================\n";
		cout<<"      Logika AND     \n";
		cout<<"=====================\n";
		cout<<"\n";
		cout<<"Masukan (input) A : ";
		cin>>a;
		cout<<"Masukan (input) B : ";
		cin>>b;
		c=a&&b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Keluaran (output) = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	case 2 :
	 	cout<<"=====================\n";
		cout<<"      Logika OR     \n";
		cout<<"=====================\n";
		cout<<"\n";
		cout<<"Masukan (input) A : ";
		cin>>a;
		cout<<"Masukan (input) B  : ";
		cin>>b;
		c=a||b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Keluaran (Output) = ";
		cout<<c<<"\n";
		getch();
		goto menu;
	case 3 :
	 	cout<<"=====================\n";
		cout<<"      Logika XOR     \n";
		cout<<"=====================\n";
		cout<<"\n";
		cout<<"Masukan (input) A : ";
		cin>>a;
		cout<<"Masukan (input) B : ";
		cin>>b;
		c=a^b;
		cout<<"====================\n";
		cout<<"\n";
		cout<<"Keluaran (Output) = ";
		cout<<c<<"\n";
		getch();
		goto menu;
}
}
