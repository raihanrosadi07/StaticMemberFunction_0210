#include <iostream>
using namespace std;

class Mahasiswa {

public:
    static int main;
    int id;
    string nama;

    void setID();
    void prinALL();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};