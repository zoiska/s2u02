#ifndef $VERYLONG_H
#define $VERYLONG_H

#include <iostream>

class VeryLong{
public:
    VeryLong(int arr[], int len);
    void normalisiere();
    void print();
    void add(const VeryLong &other);
    VeryLong operator+(const VeryLong& other) const;
    ~VeryLong();
private:
    int length;
    int *longarr;
};

#endif //$VERYLONG_H