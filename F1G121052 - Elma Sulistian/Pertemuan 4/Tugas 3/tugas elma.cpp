#include <iostream>

using namespace std;

int main(){

int baju, nominal, total, uang;
char ulang;

beli:
cout<<"1. Daster"<<endl;
cout<<"2. Gamis"<<endl;
cout<<"3. Hoodie"<<endl;
cout<<endl;

cout<<"Masukkan tipe baju yang ingin anda beli: ";cin>>baju;
cout<<endl;

switch(baju){

case 1:
    bayar:
    cout<<"Harga daster Rp 30.000/Lembar\n"<<endl;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>nominal;
    cout<<endl;
    total=nominal*30000;
    cout<<"Total harga barang keseluruhan: Rp. "<<total;
    cout<<endl;
    cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"Pembayaran anda berhasil"<<endl;
            cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
            system ("cls");
            cout<<"Maaf uang tidak cukup.\n"<<endl;
            cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembayaran ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto bayar;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;

        }break;
    case 2:
    bayar2:
    cout<<"Harga Gamis Rp 50.000/Lembar\n"<<endl;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>nominal;
    cout<<endl;
    total=nominal*50000;
    cout<<"Total harga barang keseluruhan: Rp. "<<total;
    cout<<endl;
    cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"Pembayaran anda berhasil"<<endl;
            cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
            system ("cls");
            cout<<"Maaf uang tidak cukup.\n"<<endl;
            cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembayaran ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto bayar2;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;

        }break;
    case 3:
    bayar3:
    cout<<"Harga Hoodie Rp 60.000/Lembar\n"<<endl;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>nominal;
    cout<<endl;
    total=nominal*60000;
    cout<<"Total harga barang keseluruhan: Rp. "<<total;
    cout<<endl;
    cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"Pembayaran anda berhasil"<<endl;
            cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
            system ("cls");
            cout<<"Maaf uang tidak cukup.\n"<<endl;
            cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembayaran ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto bayar3;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;

        }break;
        default: system ("cls");
                 goto beli;

    }return 0;
}
