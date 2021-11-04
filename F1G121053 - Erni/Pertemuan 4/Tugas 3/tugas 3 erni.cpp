#include <iostream>

using namespace std;

int main(){
    int ayam, nominal, total, uang;
    char ulang;
    beli:
    cout<<"NO   menu          harga"<<endl;
    cout<<"1.   ayam geprek   10.000"<<endl;
    cout<<"2.   Bakso         15.000"<<endl;
    cout<<"\nPilihlah salah satu menu [1-2]"<<endl;
    cout<<"pilihan anda: ";
    cin>>ayam;
    switch(ayam){
        case 1:
        cout<<"\nAyam geprek Rp.10.000"<<endl;
        cout<<"jumlah ayam geprek yang ingin dibeli: ";
        cin>>nominal;
        cout<<endl;
        total=nominal*10000;
        cout<<endl;
        cout<<"Total harga: Rp. "<<total<<endl;
        cout<<"Masukkan uang pembayaran anda : ";
        cin>>uang;
        if(uang==total){
          lagi:
          system("cls");
          cout<<"Selamat pembayaran anda berhasil.\n"<<endl;
          cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
          cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi;
            }
        }else if(uang>total){
            lagi2:
            system ("cls");
            cout<<"Selamat pembayaran anda berhasil."<<endl;
            cout<<"uang kembalian : "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
            cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi2;
            }
        }else {
            lagi3:
            system("cls");
            cout<<"Mohon maaf uang anda tidak mencukupi"<<endl;
            cout<<"Apakah anda ingin melakukan pembelian ulang? tekan y jika iya dan n untuk keluar."<<endl;
            cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi3;
            }
        }break;

        case 2:
        cout<<"\Bakso Rp.15.000"<<endl;
        cout<<"jumlah ayam geprek yang ingin dibeli: ";
        cin>>nominal;
        cout<<endl;
        total=nominal*15000;
        cout<<endl;
        cout<<"Total harga: Rp. "<<total<<endl;
        cout<<"Masukkan uang pembayaran anda : ";
        cin>>uang;
        if(uang==total){
          lagi4:
          system("cls");
          cout<<"Selamat pembayaran anda berhasil.\n"<<endl;
          cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
          cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi4;
            }
        }else if(uang>total){
            lagi5:
            system ("cls");
            cout<<"Selamat pembayaran anda berhasil."<<endl;
            cout<<"uang kembalian : "<<uang-total;
            cout<<endl;
            cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
            cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi5;
            }
        }else {
            lagi6:
            system("cls");
            cout<<"Mohon maaf uang anda tidak mencukupi"<<endl;
            cout<<"Apakah anda ingin melakukan pembelian ulang? tekan y jika iya dan n untuk keluar."<<endl;
            cout<<"(y/n)? ";cin>>ulang;
            if(ulang=='y'){
                system("cls");
                goto beli;
            }else if(ulang=='n'){
                system("cls");
                cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
            }else {
                system ("cls");
                goto lagi6;
            }
        }break;
        default: system ("cls");
        goto beli;
    }
    return 0;

}




