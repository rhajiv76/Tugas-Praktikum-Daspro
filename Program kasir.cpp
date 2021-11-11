#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main ()
{
char lagi;
int nama;
int pilihan;
int jumlah;
int dibayar;
int harga;
int total;
int kode;
awal:
    system("cls");
    cout<<"====================================="<<endl;
    cout<<"+++++++   KEDAI KOPI BLACKJACK     +++++++"<<endl;
    cout<<"=====Menu==================Harga===="<<endl;
    cout<<"1. kopi hitam              Rp.4000"<<endl;
    cout<<"2. kopi moca               Rp.6000"<<endl;
    cout<<"3. kopi susu               Rp.8000"<<endl;
    
    



    cout<<"Masukkan Pilihan Anda(1-3) =";
    cin>>kode;

    switch(kode)
    {

    case 1 :
        cout<<"kopi hitam"<<endl;
        harga=4000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 2 :
        cout<<"kopi moka"<<endl;
        harga=6000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 3 :
        cout<<"kopi susu"<<endl;
        harga=8000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR = ";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    
    default:
    cout<<"Kode tersebut tidak ada dalam menu"<<endl;
    }
    cout<<"Anda Ingin Mengulangi Lagi (Y?N)= ";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if (lagi=='N' || lagi=='n'){
            goto selesai;
        }
selesai:
    system("cls");
    cout<<"Terima Kasih Atas Kunjungan Anda"<<endl;

return 0;
}


