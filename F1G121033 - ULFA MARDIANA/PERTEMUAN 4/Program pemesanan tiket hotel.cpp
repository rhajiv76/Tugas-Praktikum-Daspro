#include<iostream>

using namespace std;
int main(){
	int standart,superior,deluxe,a,tiket,bayar,total;
	char y;
	//harga tiket kamar hotel permalam
	standart  = 500000;
	superior  = 1000000;
	deluxe  = 1500000;
	kamar :
	cout<<"\n";
	cout<<"=== Selamat Datang di program Pemesananan tiket hotel kami === \n";
	cout<<"\n";
	cout<<"1. Standart room \n2. Superior room \n3. Deluxe room \n";
	cout<<"============================================================== \n";
	cout<<"Harap Masukkan Nomor Kamar pilihan Anda \n";
	cin>>a;
	switch (a){
		case 1 :
			cout<<"Anda memilih Standart room \n";
			cout<<"Dengan Harga tiket rp,"<<standart<<endl;
			cout<<"Harap masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * standart ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Standart room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang Anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"HAVE A NICE DAY  \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Superrior room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"Terima kasih telah menggunakan program kami \n";
				}
			}
			else{
				cout<<"Maaf uang yang dimiliki tidak cukup \n";
				cout<<"Mohon periksa kembali uang anda dan silahkan cek ulang kamar pesanan \n";
				system("pause");
				system("cls");
				goto kamar;
			}
			break;
			case 2 :
			cout<<"Anda memilih superrior room \n";
			cout<<"Dengan Harga tiket rp,"<<superior<<endl;
			cout<<"Mohon masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * superior ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket superrior room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"HAVE A NICE DAY  \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Deluxe room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"HAVE A NICE DAY \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"Mohon periksa kembali uang Anda dan silahkan cek ulang kamar pesanan anda\n";
				system("pause");
				system("cls");
				goto kamar;
			}
			break;
			case 3 :
			cout<<"Anda memilih Deluxe room \n";
			cout<<"Dengan Harga tiket rp,"<<deluxe<<endl;
			cout<<"Harap masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * deluxe ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket deluxe room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"HAVE A NICE DAY  \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Deluxe room \n";
				cout<<"Jumlah tiket yang dipesan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Sisa uang anda Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda ingin mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Apakah anda bersedia mengulang kembali pemesanan? \n";
					system("cls");
					goto kamar;
				}
				else{
					cout<<"HAVE A NICE DAY  \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"Mohon periksa kembali uang Anda dan silahkan cek ulang kamar pesanan anda \n";
				system("pause");
				system("cls");
				goto kamar;
			}
			break;
			default:
				cout<<"masukkan nomor pesanan nomor kamar \n";
				system("pause");
				system("cls");
				goto kamar;
	}
	return 0;
	
}







