#include "bruch.h"
#include "verylong.h"
#include <iostream>

int main() {
    //-----------------Bruch----------------
    Bruch b1(2, 1);
    Bruch b2(5, 2);
    Bruch erg1(0, 0);
    Bruch erg2(0, 0);
    Bruch erg3(0, 0);
    std::cout << b1.reell() << std::endl;

    erg1 = b1 + b2;
    std::cout << erg1.reell() << std::endl;

    erg2 = erg2.zahlenreihe(10);
    std::cout << "(" << erg2.Zaehler() << "/" << erg2.Nenner() << ")" << std::endl;
    std::cout << erg2.reell() << std::endl;

    double test1 = (1.0/2.0) - (1.0/3.0) + (1.0/4.0) - (1.0/5.0) + (1.0/6.0) - (1.0/7.0) + (1.0/8.0) - (1.0/9.0) + (1.0/10.0);
    std::cout << test1 << std::endl;    //Test für Zahlenreihe mit 10 Brüchen

    erg3 = erg3.zahlenreihe(20);
    std::cout << "(" << erg3.Zaehler() << "/" << erg3.Nenner() << ")" << std::endl;
    std::cout << erg3.reell() << std::endl;

    double test2 = (1.0/2.0) - (1.0/3.0) + (1.0/4.0) - (1.0/5.0) + (1.0/6.0) - (1.0/7.0) + (1.0/8.0) - (1.0/9.0) + (1.0/10.0) - (1.0/11.0) + (1.0/12.0) - (1.0/13.0) + (1.0/14.0) - (1.0/15.0) + (1.0/16.0) - (1.0/17.0) + (1.0/18.0) - (1.0/19.0) + (1.0/20.0);
    std::cout << test2 << std::endl;    //Test für Zahlenreihe mit 20 Brüchen

//-------------VeryLong-----------------
    int arr[5000];
    for(int i = 1; i <= 5000; i++) {
        arr[i-1] = rand() % 10;
    }

    VeryLong number1(arr, 5000);
    number1.print();


    int arr2[20] = {0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 1, 2, 3, 4};
    VeryLong number2(arr2, 20);
    number2.print();
    number2.normalisiere();
    number2.print();

    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
    int arr4[10] = {9, 8, 7, 6, 5, 4, 3, 6, 5, 2};
    VeryLong number3(arr3, 10);
    VeryLong number4(arr4, 10);

    VeryLong newLong = number3 + number4;

    newLong.print();

    return 0;
}