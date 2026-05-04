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

int Mahasiswa::nim = 10;

void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printALL() {

    cout <<"ID : " << id << endl;
    cout << "Nama : " << nama << endl;
}

int main() {
    Mahasiswa mhs1("Megawati");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Purbaya");
    Mahasiwa mhs4("Joko widodo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printALl();

    return 0;
    
}