#include<iostream> 

using namespace std;
int main(){
char y;
int VIP,Seat,Standing,a,tiket,total,bayar,nilaiuang;
VIP = 5000000;
Seat = 2500000;
Standing = 1000000;
pesan :
cout<<"\n";
cout<<"============================================================ "<<endl;
cout<<"------------------- Selamat datang di --------------------"<<endl;
cout<<"---------------- halaman pemesanan tiket ------------------"<<endl;
cout<<"============================================================"<<endl;
cout<<"\n\n";


cout<<"Silahkan melihat jenis tiket berikut ini :";
cout<<"- VIP = Rp."<<VIP<<endl;
cout<<"- Seat = Rp."<<Seat<<endl;
cout<<"- Standing = Rp."<<Standing<<"\n\n";
cout<<"================================================ \n";

cout<<"Masukkan jenis tiket yang anda pilih \n";

cin>>a;

switch (a){
case 'a' :
cout<<"Anda memilih tiket jenis VIP \n";
cout<<"Dengan Harga tiket Rp."<<VIP<<endl;
cout<<"Masukkan Jumlah Tiket yang Ingin Anda Pesan \n";
cin>>tiket;
total = tiket * VIP ;
cout<<"Jumlah yang harus Anda bayar adalah Rp."<<total<<endl;
cout<<"Masukkan nilai uang yang Anda miliki \n";
cin>>bayar;
if(bayar>total){
cout<<"Anda Memiliki Uang yang Cukup Untuk Membeli Tiket VIP \n";
cout<<"Jumlah Tiket yang Anda Pesan "<<tiket<<endl;
cout<<"Dengan total keseluruhan Rp."<<total<<endl;
cout<<"Uang yang Anda punya Rp."<<bayar<<endl;
cout<<"Sisa uang Anda Setelah Melakukan Transaksi Ini Rp."<<bayar-total<<endl;
system("pause");
system("cls");
cout<<"== TERIMAKASIH TELAH MEMESAN TIKET DISINI ^^ ==";
}

else{
cout<<"Maaf uang yang anda miliki tidak cukup untuk melakukan transaksi ini \n";
cout<<"Silahkan melihat ulang jenis tiket pilihan anda \n";
system("pause");
system("cls");
goto pesan;
}
break;
case 'b' :
cout<<"Anda memilih Tiket Jenis Seat \n";
cout<<"Dengan Harga Tiket Rp."<<Seat<<endl;
cout<<"Masukkan Jumlah Tiket yang Ingin Anda Pesan \n";
cin>>tiket;
total = tiket * Seat ;
cout<<"Jumlah yang harus Anda bayar adalah Rp."<<total<<endl;
cout<<"Masukkan nilai uang yang Anda miliki \n";
cin>>bayar;
if(bayar>total){
cout<<"Anda Memiliki Uang yang Cukup Untuk Membeli Tiket Seat \n";
cout<<"Jumlah Tiket yang Anda Pesan "<<tiket<<endl;
cout<<"Dengan Total Keseluruhan Rp."<<total<<endl;
cout<<"Uang yang Anda Punya Rp."<<bayar<<endl;
cout<<"Sisa uang Anda Setelah Melakukan Transaksi Ini Rp."<<bayar-total<<endl;
system("pause");
system("cls");
cout<<"== TERIMAKASIH TELAH MEMESAN TIKET DISINI ^^ ==";
}

else{
cout<<"Maaf uang yang anda miliki tidak cukup untuk melakukan transaksi ini \n";
cout<<"Silahkan melihat ulang jenis tiket pilihan anda \n";
system("pause");
system("cls");
goto pesan;
}
break;
case 'c' :
cout<<"Anda memilih Tiket Jenis Standing \n";
cout<<"Dengan Harga Tiket Rp."<<Standing<<endl;
cout<<"Masukkan Jumlah Tiket yang Ingin Anda Pesan \n";
cin>>tiket;
total = tiket * Standing ;
cout<<"Jumlah yang harus Anda bayar adalah Rp."<<total<<endl;
cout<<"Masukkan nilai uang yang Anda miliki \n";
cin>>bayar;
if(bayar>total){
cout<<"Anda Memiliki Uang yang Cukup Untuk Membeli Tiket Seat \n";
cout<<"Jumlah Tiket yang Anda Pesan "<<tiket<<endl;
cout<<"Dengan Total Keseluruhan Rp."<<total<<endl;
cout<<"Uang yang Anda Punya Rp."<<bayar<<endl;
cout<<"Sisa uang Anda Setelah Melakukan Transaksi Ini Rp."<<bayar-total<<endl;
system("pause");
system("cls");
cout<<"== TERIMAKASIH TELAH MEMESAN TIKET DISINI ^^ ==";
}

else{
cout<<"Maaf uang yang anda miliki tidak cukup untuk melakukan transaksi ini \n";
cout<<"Silahkan melihat ulang jenis tiket pilihan anda \n";
system("pause");
system("cls");
goto pesan;
}
break;
default:
cout<<"Masukkan Jenis Tiket Pesanan Anda \n";
system("pause");
system("cls");
goto pesan;
}
return 0; 

}
