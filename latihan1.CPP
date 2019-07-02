#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
    struct bulat
    {
        float jari;
        float keliling;
        float luas;
    };
    bulat lingkaran;
    cout<<"Masukkan jari-jari lingkaran : ";
    cin>>lingkaran.jari;
    lingkaran.keliling=2*3.14259*lingkaran.jari;
    lingkaran.luas=3.14259*lingkaran.jari*lingkaran.jari;
    cout<<"Keliling lingkaran = "<<lingkaran.keliling;
    cout<<"Luas lingkaran = "<<lingkaran.luas;
    getch();
}