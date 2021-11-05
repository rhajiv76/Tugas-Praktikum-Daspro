#include <iostream>

using namespace std;

int main(){

int tiket,uang,jumlah,total;
char ulang;

pembayaran:
cout<<"============================================================"<<endl;
cout<<"|| Tugas 3 Praktikum DASPRO                               ||"<<endl;
cout<<"|| Nama     : Asar Ardianto                               ||"<<endl;
cout<<"|| Nim      : F1G121042                                   ||"<<endl;
cout<<"|| Program Melakukan Transaksi Pembelian Tiket Kereta API ||"<<endl;
cout<<"============================================================"<<endl;
system("title Melakukan Transaksi Pembelian Tiket Kereta API");

cout<<endl;
cout<<"====Daftar Tiket===="<<endl;
cout<<"|| 1. Ekonomi     ||"<<endl;
cout<<"|| 2. Bisnis      ||"<<endl;
cout<<"|| 3. Eksekutif   ||"<<endl;
cout<<"===================="<<endl;
cout<<endl;

cout<<"Masukan jenis tiket yang anda ingin beli: ";cin>>tiket;
cout<<endl;

switch (tiket){
case 1:
    beli:
    cout<<"harga tiket Rp 150.000/org"<<endl;
    cout<<"Masukan jumlah tiket yang ingin dibeli: ";cin>>jumlah;
    total=jumlah*150000;
    cout<<endl;
    cout<<"Total harga tiket: "<<total;
    cout<<endl;
    cout<<"masukan uang anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Selamat, pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"selamat pembayaran anda berhasil."<<endl;
            cout<<"total sisa uang anda adalah Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"Tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
        cout<<"uang yang anda miliki tidak mencukupi"<<endl;
        cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembelian ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }
    break;
case 2:
    beli2:
    cout<<"harga tiket Rp 200.000/org"<<endl;
    cout<<"Masukan jumlah tiket yang ingin dibeli: ";cin>>jumlah;
    total=jumlah*200000;
    cout<<endl;
    cout<<"Total harga tiket: "<<total;
    cout<<endl;
    cout<<"masukan uang anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Selamat, pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"selamat pembayaran anda berhasil."<<endl;
            cout<<"total sisa uang anda adalah Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"Tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
        cout<<"uang yang anda miliki tidak mencukupi"<<endl;
        cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembelian ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli2;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }
    break;
case 3:
    beli3:
    cout<<"harga tiket Rp 300.000/org"<<endl;
    cout<<"Masukan jumlah tiket yang ingin dibeli: ";cin>>jumlah;
    total=jumlah*300000;
    cout<<endl;
    cout<<"Total harga tiket: "<<total;
    cout<<endl;
    cout<<"masukan uang anda: ";cin>>uang;
        if(uang==total){
            system("cls");
            cout<<"Selamat, pembayaran anda berhasil.\n"<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else if(uang>total){
            system("cls");
            cout<<"selamat pembayaran anda berhasil."<<endl;
            cout<<"total sisa uang anda adalah Rp. "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan transaksi lain?"<<endl;
            cout<<"Tekan y jika ingin melakukan transaksi lain atau n untuk keluar.\n"<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto pembayaran;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }else {
        cout<<"uang yang anda miliki tidak mencukupi"<<endl;
        cout<<"Silahkan lakukan pembayaran ulang.\n"<<endl;
            cout<<"tekan y untuk melakukan pembelian ulang atau n untuk keluar."<<endl;
            cout<<"(y/n): ";cin>>ulang;
             if (ulang=='y'){
                system("cls");
                goto beli3;
             }else cout<<"Terima kasih telah menggunakan layanan ini, tekan tombol apa saja untuk keluar."<<endl;
        }
    break;

default :
        system("cls");
        goto pembayaran;


}

}

