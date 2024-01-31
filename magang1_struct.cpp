#include <iostream>
#include <stdio.h>

using namespace std;

struct {
    string nama;
    int umur;
    string tgl_lahir; 
} ktp;


int main(){
    ktp orang1;
    ktp orang2;
    ktp orang[2];

    orang1.nama = "Ijul";
    orang1.umur = 18;
    orang1.tgl_lahir = "2 Mei";

    orang2.nama = "Imam";
    orang2.umur = 19;
    orang2.tgl_lahir = "3 Januari";

    orang[0].nama = "Ijul";
    orang[0].umur = 18;
    orang[0].tgl_lahir = "2 Mei";

    orang[1].nama = "Imam";
    orang[1].umur = 19;
    orang[1].tgl_lahir = "3 Januari";


    // cout <<"nama: "<< orang1.nama << endl;
    // cout << "umur: " << orang1.umur << endl;
    // cout << "tgl lahir: " << orang1.tgl_lahir << endl; 

    // cout <<"nama: "<< orang2.nama << endl;
    // cout << "umur: " << orang2.umur << endl;
    // cout << "tgl lahir: " << orang2.tgl_lahir << endl; 

for(int i=0;i<2;i++){
    cout <<"nama: "<< orang[i].nama << endl;
    cout << "umur: " << orang[i].umur << endl;
    cout << "tgl lahir: " << orang[i].tgl_lahir << endl; 
    }
}