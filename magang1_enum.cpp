#include <iostream>

using namespace std;

enum absen_kelas{
    ijul,
    budi,
    abdul,
    joni,
    ibnu

};

int main()
{
    absen_kelas kelasA;

    kelasA = ibnu;

    cout << kelasA << endl;
}