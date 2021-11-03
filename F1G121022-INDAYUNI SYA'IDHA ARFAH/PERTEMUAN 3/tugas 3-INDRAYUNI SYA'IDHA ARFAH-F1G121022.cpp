#include<iostream>
using namespace std;
int main(){
	const int doraemon=50000,naruto=75000,spiderman=80000,batman=100000;
	int jumlah,uang,seluruh;
	char pilih,yes;
	bioskop:
	cout<<"========= Program pembelian tiket bioskop ========= \n";
	cout<<"1. Doraemon Rp.50000"<<endl;
	cout<<"2. Naruto Rp. 75000"<<endl;
	cout<<"3. Spiderman Rp. 80000"<<endl;
	cout<<"4. Batman Rp. 100000"<<endl;
	cout<<"=================================================== \n";
	cout<<"Pilih nomor film yang Anda ingin nonton \n";
	cin>>pilih,yes;
	switch(pilih){
		case '1':
			cout<<"Anda memilih film Doraemon dengan harga tiket "<<doraemon<<"per orang \n";
			cout<<"Silahkan pilih berapa tiker yang Anda inginkan : ";
			cin>>jumlah;
			seluruh=jumlah*doraemon;
			cout<<"Jumlah yang akan Anda bayar adalah Rp."<<seluruh<<endl;
			cout<<"Uang yang dimiliki : Rp.";
			cin>>uang;
			if(uang>seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film doraemon \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else if(uang==seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film doraemon \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup untuk membeli tiket bioskop yang Anda inginkan \n";
				cout<<"silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto bioskop;
			}
			break;
			case '2':
			cout<<"Anda memilih film Naruto dengan harga tiket "<<naruto<<"per orang \n";
			cout<<"Silahkan pilih berapa tiker yang Anda inginkan : ";
			cin>>jumlah;
			seluruh=jumlah*naruto;
			cout<<"Jumlah yang akan Anda bayar adalah Rp."<<seluruh<<endl;
			cout<<"Uang yang dimiliki : Rp.";
			cin>>uang;
			if(uang>seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film naruto \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else if(uang==seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film naruto \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup untuk membeli tiket bioskop yang Anda inginkan \n";
				cout<<"silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto bioskop;
			}
			break;
			case '3':
			cout<<"Anda memilih film Spiderman dengan harga tiket "<<spiderman<<"per orang \n";
			cout<<"Silahkan pilih berapa tiker yang Anda inginkan : ";
			cin>>jumlah;
			seluruh=jumlah*spiderman;
			cout<<"Jumlah yang akan Anda bayar adalah Rp."<<seluruh<<endl;
			cout<<"Uang yang dimiliki : Rp.";
			cin>>uang;
			if(uang>seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film spiderman \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else if(uang==seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film spiderman \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup untuk membeli tiket bioskop yang Anda inginkan \n";
				cout<<"silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto bioskop;
			}
			break;
			case '4':
			cout<<"Anda memilih film Batman dengan harga tiket "<<batman<<"per orang \n";
			cout<<"Silahkan pilih berapa tiker yang Anda inginkan : ";
			cin>>jumlah;
			seluruh=jumlah*batman;
			cout<<"Jumlah yang akan Anda bayar adalah Rp."<<seluruh<<endl;
			cout<<"Uang yang dimiliki : Rp.";
			cin>>uang;
			if(uang>seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film Batman \n";
				cout<<"Dengan total tiket : "<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else if(uang==seluruh){
				cout<<"Uang yang dimiliki cukup untuk membeli tiket film batman \n";
				cout<<"Dengan total tiket :"<<jumlah<<endl;
				cout<<"Total Harga : Rp."<<seluruh<<endl;
				cout<<"Uang yang dibayar : Rp."<<uang<<endl;
				cout<<"Kembalian Anda Rp."<<uang-seluruh<<endl;
				cout<<"========================================== \n";
				cout<<"Terimakasih sudah membeli tiket bioskop ini \n";
				cout<<"\nApakah Anda ingin membeli tiket lagi (y/n)? \n";
				cin>>yes;
				if(yes=='y'){
					cout<<"Program akan kembali ke halaman awal \n";
					system("pause");
					system("cls");
					goto bioskop;
				}
				else{
					system("cls");
					cout<<"Terimakasih sudah memakai program kami \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup untuk membeli tiket bioskop yang Anda inginkan \n";
				cout<<"silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto bioskop;
			}
			break;
			default :
				cout<<"Masukkan nomor film yang sesuai pada label bioskop \n";
				system("cls");
				goto bioskop;
	}
}
