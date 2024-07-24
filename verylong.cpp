#include "verylong.h"

VeryLong::VeryLong(int arr[], int len) {
    this->length = len;
    this->longarr = new int[len];
    for(int i = 0; i < length; i++) {
        longarr[i] = arr[i];
    }
}

void VeryLong::normalisiere() {
    int zeros = 0;
    int i = 0;
    while(longarr[i] == 0) {
        zeros++;
        i++;
    }
    this->length -= zeros;
    if(longarr[i] != 0) {
        for(int j = 0; j < length; j++) {
            longarr[j] = longarr[j + zeros];
        }
    }
}

void VeryLong::print() {
    for(int j = 0; j <= this->length - 1; j++) {
        std::cout << this->longarr[j];
    }
    std::cout << "\n";
}

void VeryLong::add(const VeryLong &other) {
    int carry = 0;
    int maxLength = std::max(length, other.length);
    int *result = new int[maxLength + 1];

    for (int i = 0; i < maxLength; ++i) {
        int sum = carry;
        if (i < length) {
            sum += longarr[length - 1 - i];
        }
        if (i < other.length) {
            sum += other.longarr[other.length - 1 - i];
        }
        result[maxLength - i] = sum % 10;
        carry = sum / 10;
    }
    result[0] = carry;

    delete longarr;
    longarr = result;
    length = maxLength + 1;
}

VeryLong VeryLong::operator+(const VeryLong& other) const {
    VeryLong sum(this->longarr, this->length);
    sum.add(other);
    return sum;
}

VeryLong::~VeryLong() {
    delete this->longarr;
}