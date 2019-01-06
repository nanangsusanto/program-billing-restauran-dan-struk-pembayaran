#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    int makanan,minuman,porsi1,porsi2,pilihan1,pilihan2,sub_total1,sub_total2,pembayaran,kembalian,total;
    int a=45000,b=45000,c=30000,d=3000,e=5000,f=8000;

    cout<< "\n___________________________________________________________________________________\n";
    cout<< "\t\t\t    DAFTAR MENU      " <<endl;
    cout<< "\n =>        MAKANAN     <=                           =>        MINUMAN       <=\n"<<endl;
    cout<< "1. Gurameh Bakar          : Rp. 45.000                1. Teh Manis    : Rp.  3.000"<<endl;
    cout<< "2. Gurameh Asam Manis     : Rp. 45.000                2. Es Jeruk     : Rp.  5.000"<<endl;
    cout<< "3. Nila Bakar             : Rp. 30.000                3. Jus Alpukat  : Rp.  8.000"<<endl;
    cout<< "\n___________________________________________________________________________________\n";

    pilihan1 :
        {
            cout<< "\n Masukkan nomer makanan yang ingin anda pesan : "; cin>>makanan;
            cout<< " Berapa porsi                                 : "; cin>>porsi1;

            switch (makanan)
            {
            case 1:
                cout<< "\n1. Gurameh Bakar          = Rp. 45000 "<<endl;
                sub_total1=a*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total         = Rp. "<<sub_total1<<endl;
                break;
            case 2:
                cout<< "\n2. Gurameh Asam Manis     = Rp. 45000 "<<endl;
                sub_total1=b*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total        = Rp. "<<sub_total1<<endl;
                break;
            case 3:
                cout<< "\n3. Nila Bakar            = Rp.  30000 "<<endl;
                sub_total1=c*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total        = Rp. "<<sub_total1<<endl;
                break;
            default :
                cout<< "\n Pilihan yang anda masukkan belum tersedia, Mohon masukkan pilihan anda kembali"<<endl;
                goto pilihan1;

            }
        }

        pilihan2 :
            {
                cout<< "\n Masukkan nomer minuman yang ingin anda pesan : "; cin>>minuman;
            cout<< " Berapa porsi                                 : "; cin>>porsi2;
            switch (minuman)
            {
            case 1:
                cout<< "\n1. Teh Manis      = Rp.  3000 "<<endl;
                sub_total2=d*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total     = Rp. "<<sub_total2<<endl;
                break;
            case 2:
                cout<< "\n2. Es Jeruk      = Rp.  5000 "<<endl;
                sub_total2=e*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total       = Rp. "<<sub_total2<<endl;
                break;
            case 3:
                cout<< "\n3. Jus Alpukat      = Rp. 8000 "<<endl;
                sub_total2=f*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total          = Rp. "<<sub_total2<<endl;
                break;
            default :
                cout<< "\n Maaf pilihan yang anda masukkan belum tersedia, Silahkan masukkan pilihan anda kembali"<<endl;
                goto pilihan2;
            }

            }

        cout<< "\n________________________________________________________________________________\n"<<endl;
        total=sub_total1+sub_total2;
        cout<< "\n Jumlah total belanjaan anda adalah        : Rp. "<<total;
        cout<< "\n Jumlah uang pembayaran                    : Rp. "; cin>>pembayaran;
        cout<< "\n________________________________________________________________________________\n";
        kembalian=pembayaran-total;
        cout<< "Kembaliannya adalah                       : Rp. "<<kembalian<<endl;
        cout<< "\n\n               # TERIMAKASIH ATAS KUNJUNGAN ANDA # \n"<<endl;
        cout<<endl;
        system ("cls");



cout<< "|____________________________________________________________|"<<endl;
cout<< "|               # SAUNG KURIANG #                 |"<<endl;
cout<< "|____________________________________________________________|"<<endl;
cout<< "|   Nama Produk     Porsi       Harga          Sub Total     |"<<endl;
cout<< "|____________________________________________________________|"<<endl;
switch (makanan)
{
            case 1:
                sub_total1=a*porsi1;
                cout<< "    Gurameh Bakar              " <<porsi1 << "      Rp. 45000       Rp. "<<sub_total1;
                break;
            case 2:
                sub_total1=b*porsi1;
                cout<< "    Gurameh Asam Manis         " <<porsi1 << "      Rp. 45000       Rp. "<<sub_total1;
                break;
            case 3:
                sub_total1=c*porsi1;
                cout<< "    Nila Bakar                 " <<porsi1 << "      Rp. 30000       Rp. "<<sub_total1;
                break;
}

switch (minuman)
{
            case 1:
                sub_total2=d*porsi2;
                cout<< "\n     Teh Manis\t       " <<porsi2 << "      Rp.  3000       Rp. "<<sub_total2;
                break;
             case 2:
                sub_total2=e*porsi2;
                cout<< "\n     Es Jeruk\t        " <<porsi2 << "      Rp.  5000       Rp. "<<sub_total2;
                break;
             case 3:
                sub_total2=f*porsi2;
                cout<< "\n   Jus Alpukat\t       " <<porsi2 << "      Rp. 8000       Rp. "<<sub_total2;
                break;
}
cout<< "\n|____________________________________________________________|\n";
cout<< "\n   Total Pembayaran\t\t\t     Rp. "<<total<<endl;
cout<< "   Jumlah Uang Yang Dibayarkan\t\t     Rp. "<<pembayaran<<endl;
cout<< "\n|____________________________________________________________|\n";
cout<< "\n   Uang Kembaliannya\t\t\t     Rp. "<<kembalian<<endl;
cout<< "\n\n          TERIMAKASIH TELAH MENGUNJUNGI SAUNG KAMI "<<endl;
cout<< "\n|____________________________________________________________|";

getch();

}
