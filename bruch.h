#ifndef BRUCH_H
#define BRUCH_H


class Bruch {
private:
    int n;
    int z;
    void kuerzen();
    int ggt();
public:
    Bruch(int n, int z);
    int Zaehler() const;
    int Nenner() const;
    double reell();
    Bruch operator+(const Bruch& other) const;
    Bruch operator-(const Bruch& other) const;
    Bruch operator*(const Bruch& other) const;
    Bruch operator/(const Bruch& other) const;
    Bruch zahlenreihe(int num);
};


#endif //BRUCH_H
