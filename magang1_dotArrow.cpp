#include <iostream>

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

ktp orang1;
ktp *orang2;

int main()
{
    orang2 = new ktp();

    orang1.nama = "adi";

    orang2->nama = "Budi";

    cout << orang2->nama;
}