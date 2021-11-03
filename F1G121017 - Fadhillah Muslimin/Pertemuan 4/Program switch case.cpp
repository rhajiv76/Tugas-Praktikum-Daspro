#include <iostream>

using namespace std;

int main(){
   int pilihan,total,jumlah,bayar,pilihan_1,pilihan_2,pilihan_3;
   int h1= 5000, h2= 10000, h3= 15000;

  cout<< "==== Selamat Datang Di Warung F.dila ===="<<endl;
  ulang :
  cout<< "Anda Ingin Memesan Apa?"<<endl;
  cout<< "1. Makanan"<<endl<<"2. Minuman"<<endl;
  cout<<"Masukkan Pilihan Anda (1/2) : ";
  cin>>pilihan;
  system ("cls");
  if (pilihan == 1){
     cout<< "--------- Menu Makanan ---------"<<endl;
     cout<< "1. Nasi Goreng Ayam Harga : Rp. "<<h3<<endl;
     cout<< "2. Ayam Geprek + Nasi Harga : Rp. "<<h2<<endl;
     cout<< "3. Gado- Gado Harga : Rp. "<<h2<<endl;
     cout<< " Masukkan Pesanan Anda : ";
     cin>>pilihan_1;
      system("cls");
      if (pilihan_1 == 1){
        cout<< "Anda Memesan Nasi Goreng"<<endl;
        cout<< "Masukkan Jumlah Pesanan : ";
        cin>>jumlah;
	
        total= h3*jumlah;
        cout<<"Anda Memesan Nasi Goreng Dengan "<<jumlah<<" Porsi"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;
      }else if (pilihan_1 == 2){
        cout<<"Anda Memesan Ayam Greprek + Nasi"<<endl;
        cout<<"Masukkan Jumlah Pesanan : ";
        cin>>jumlah;
        total=h2*jumlah;

        cout<<"Anda Memesan Ayam Geprek + Nasi Dengan"<<jumlah<<" Porsi"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;

      }else if (pilihan_1 == 3){
        cout<<"Anda Memesan Gado - Gado"<<endl;
        cout<<"Masukkan Jumlah Pesanan : ";
        cin>>jumlah;
        total=h2*jumlah;

        cout<<"Anda Memesan Gado - Gado Dengan"<<jumlah<<" Porsi"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;

      }else {
        cout<<"Pesanan Anda Tidak Tersedia";
      }
  }else if (pilihan == 2){
    cout<< "--------- Menu Minuman ---------"<<endl;
    cout<< "1. Teh Manis (Rp. 5.000)"<<endl;
    cout<< "2. Jus Jeruk (Rp. 15.000)"<<endl;
    cout<< "3. Kopi (Rp. 5.000)"<<endl;
    cout<< "Masukkan Pesanan Anda : ";
    cin>>pilihan_2;
     system ("cls");
      if (pilihan_2 == 1){
        cout<< "Anda Memesan Teh Manis"<<endl;
        cout<< "Masukkan Jumlah Pesanan : ";
        cin>>jumlah;

        total= h1*jumlah;
        cout<<"Anda Memesan Teh Manis Dengan "<<jumlah<<" Gelas"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;
      }else if (pilihan_2 == 2){
        cout<<"Anda Memesan Jus Jeruk"<<endl;
        cout<<"Masukkan Jumlah Pesanan : ";
        cin>>jumlah;
        total=h3*jumlah;

        cout<<"Anda Memesan Jus Jeruk"<<jumlah<<" Gelas"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;

      }else if (pilihan_2 == 3){
        cout<<"Anda Memesan Kopi"<<endl;
        cout<<"Masukkan Jumlah Pesanan : ";
        cin>>jumlah;
        total=h1*jumlah;

        cout<<"Anda Memesan Kopi Dengan"<<jumlah<<" Gelas"<<endl;
        cout<< "Total Pembayaran Anda : "<<total<<endl;

      }else {
        cout<<"Pesanan Anda Tidak Tersedia";
      }

  }else {
    cout<< "Pilihan Anda Tidak Tersedia";
  }
    

}       

