#include <iostream>

#include<conio.h>

using namespace std;
int main(){
	const int tempe_mendoan=1000,tahu_isi=1000,bakwan=1000,pisang_goreng=1000;
	int jumlah,harga,bayar,kembali;
	char isi,pilih_nomor;
	awal:
	system("color 8");
	cout<<"==================== ANEKA GORENGAN YENI ILMIAH ==================== "<<endl;
	cout<<endl;
	cout<<"========== MENU GORENGAN=========="<<endl;
	cout<<endl;
	cout<<"1. tempe mendoan Rp."<<tempe_mendoan<<endl;
	cout<<"2. tahu isi Rp."<<tahu_isi<<endl;
	cout<<"3. bakwan Rp."<<bakwan<<endl;
	cout<<"4. pisang goreng."<<pisang_goreng<<endl;

	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilih_nomor;
	switch(pilih_nomor){
		case '1':
			cout<<"tempe mendoan"<<endl;
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*tempe_mendoan;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto awal;
			}
	
	break;
		case '2':
			cout<<"tahu isi"<<endl;
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*tahu_isi;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto awal;
			}
		break;
		case '3':
			cout<<"bakwan"<<endl;
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah* bakwan;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto awal;
			}
			break;
		case '4':
			cout<<"pisang goreng"<<endl;
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah* pisang_goreng;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah memesan gorengan di aneka gorengan yeni ilmiah";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto awal;
			}
			break;
			default:
			cout<<"Masukkan Nomor Pesanan Yang sesuai \n";

		}
	getch();

}
			
	
