#include <iostream>

using namespace std;

namespace space_one{
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

    ktp_digital orang1("abdul", 18, "4 Desember");   

    void out_hello(){
        std::cout << "hello1" << endl;
    }
}

namespace space_two{
    namespace space_two_one{
        class ktp{
            public:
            string nama;
            int umur;
            string tgl_lahir; 

            void out_ktp();

            private:
            int rekening = 602626426;  
};
    }
}

int main()
{
    space_one::ktp_digital orang2("Budi", 20, "4 November");


    space_one::orang1.out_ktp(); //object dalam namespace
    space_one::out_hello(); //function dalam namespace
    orang2.out_ktp();//object luar namespace

    space_two::space_two_one::ktp orang3;

    orang3.nama = "Koni";

    cout << orang3.nama ;


}