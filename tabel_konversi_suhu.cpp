#include <conio.h>
#include <stdio.h>
 int main()
{

    float f, r, k;
    int x, celcius;
    celcius=-10;

    printf ("\t----------Tabel Konversi Suhu----------\n");
    printf ("\t||NO||CELCIUS||FAHRENHEIT||REAMUR||KELVIN||\n");

    for (x=1;x<=11;x++)
    {
        celcius=celcius+10;
        r=(celcius*9/5)+32;
        f=(celcius*4/5);
        k=(celcius+273);
        printf("\t||%2d||%7d||%6.f||%10.f||%6.f||\n",x,celcius,r,f,k);
       
    }
    getch();

}
