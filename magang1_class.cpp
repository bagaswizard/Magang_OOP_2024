#include <iostream>
#include <stdio.h>

using namespace std;

class ktp{
    public:
    string nama;
    int umur;
    string tgl_lahir; 



    void out_ktp();

    private:
    int rekening = 602626426;  
};
void ktp::out_ktp()
    {
        cout <<"nama: "<< nama << endl;
        cout << "umur: " << umur << endl;
        cout << "tgl lahir: " << tgl_lahir << endl; 
    };

class ktp_digital{
    public:
    string nama;
    int umur;
    string tgl_lahir; 

    ktp_digital(string input_nama, int input_umur, string input_tgl_lahir){
        nama = input_nama;
        umur = input_umur;
        tgl_lahir = input_tgl_lahir;
    }

    void out_ktp();


    private:
    int rekening = 602626426;  

    public:
    void out_rekening(){
        cout << rekening << endl;
    };
    
};
void ktp_digital::out_ktp()
    {
        cout <<"nama: "<< nama << endl;
        cout << "umur: " << umur << endl;
        cout << "tgl lahir: " << tgl_lahir << endl; 
    };

class bpjs : ktp_digital{
    public:
        bpjs(string input_nama, int input_umur, string input_tgl_lahir){
        nama = input_nama;
        umur = input_umur;
        tgl_lahir = input_tgl_lahir;
    }
    void out_ktp()
    {
        cout <<"nama: "<< nama << endl;
        cout << "umur: " << umur << endl;
        cout << "tgl lahir: " << tgl_lahir << endl; 
    };
};

int main()
{
    ktp orang1;
    ktp orang[2];
    ktp_digital orang3("Rahmat", 21, "5 Februari");
    bpjs bpjsOrang3("Budi", 17, "5 Maret");

    orang1.nama = "Ijul";
    orang1.umur = 18;
    orang1.tgl_lahir = "2 Mei";

    orang[0].nama = "Ijul";
    orang[0].umur = 18;
    orang[0].tgl_lahir = "2 Mei";

    orang[1].nama = "Imam";
    orang[1].umur = 19;
    orang[1].tgl_lahir = "3 Januari";

    // for(int i=0;i<2;i++){
    //     orang[i].out_ktp();
    // }

    // cout << orang[0].rekening;
    // cout << orang3.nama << endl;

    // orang3.out_ktp();
    // orang3.out_rekening();

    bpjsOrang3.out_ktp();
}