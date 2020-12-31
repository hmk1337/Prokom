#include <iostream>
using namespace std;
main()
{
int baris, colom, a, b;
cout<<"Masukkan baris: ";
cin>>baris;
cout<<"Masukkan colom: ";
cin>>colom;

for (a=1; a<=baris; a++)
{

for( b=1; b<=colom;  b++)
{
cout<<" * ";
}
cout<<"\n";
}
return 0;
}
