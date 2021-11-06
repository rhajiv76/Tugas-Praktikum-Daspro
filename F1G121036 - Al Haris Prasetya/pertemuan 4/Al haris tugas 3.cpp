#include<iostream>
using namespace std;
int main(){
	int oppo,nokia,advan,pilihan,uang;
	oppo = 1000000;
	nokia = 500000;
	advan = 700000;
	ulang:
	cout<<"******************************************************** \n";
	cout<<"---------*********** Toko Al Haris ************--------- \n";
	cout<<"******************************************************** \n";
	cout<<"1.Oppo Rp."<<oppo<<endl;
	cout<<"2.Nokia Rp."<<nokia<<endl;
	cout<<"3.Advan Rp."<<advan<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>pilihan;
	switch(pilihan){
		case 1:
			cout<<"Memilih hp Oppo Harga Rp."<<oppo<<endl;
			cout<<"Masukkan nilai uang : Rp.";
			cin>>uang;
			if(uang>oppo){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-oppo<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else if(uang==oppo){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-oppo<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else{
				cout<<"Uang Anda tidak cukup \n";
				system("cls");
				goto ulang;
			}
			break;
		case 2:
			cout<<"Memilih hp Nokia Harga Rp."<<nokia<<endl;
			cout<<"Masukkan nilai uang : Rp.";
			cin>>uang;
			if(uang>nokia){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-nokia<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else if(uang==nokia){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-nokia<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else{
				cout<<"Uang Anda tidak cukup \n";
				system("cls");
				goto ulang;
			}
			break;
		case 3:
			cout<<"Memilih hp Advan Harga Rp."<<advan<<endl;
			cout<<"Masukkan nilai uang : Rp.";
			cin>>uang;
			if(uang>advan){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-advan<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else if(uang==advan){
				cout<<"Transaksi berhasil \n";
				cout<<"Kembalian : Rp."<<uang-advan<<endl;
				cout<<"Terimakasih sudah belanja di lapak haris \n";
			}
			else{
				cout<<"Uang Anda tidak cukup \n";
				system("cls");
				goto ulang;
			}
			break;
		default:
			system("cls");
			goto ulang;
	}
}
