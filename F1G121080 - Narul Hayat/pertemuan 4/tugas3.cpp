#include<iostream>
using namespace std;
int main(){
	int arak,bir,amer,a,harga,bayar,total;
	char y;
	//harga tiket wisata
	arak = 50000;
	bir = 150000;
	amer = 25000;
	kedai :
	cout<<"************************************************************* \n";
	cout<<"============= Selamat Datang di kedai harapan =============== \n";
	cout<<"************************************************************* \n";
	cout<<"1. arak nomorsatu \n2. bir hitam \n3. amer penghilang stres \n";
	cout<<"============================================================= \n";
	cout<<"Silahkan Masukkan Nomor Tujuan kedai Anda \n";
	cin>>a;
	switch (a){
		case 1 :
			cout<<"Anda memilih ke arak nomorsatu \n";
			cout<<"Dengan Harga harga rp,"<<arak<<endl;
			cout<<"Silahkan masukkan jumlah harga yang Anda inginkan \n";
			cin>>harga;
			total = harga * arak ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga arak nomorsatu \n";
				cout<<"dengan jumlah harga yang diinginakn "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga arak nomosatu \n";
				cout<<"dengan jumlah harga yang diinginakn "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto kedai;
			}
			break;
			case 2 :
			cout<<"Anda memilih ke bir hitam \n";
			cout<<"Dengan Harga harga rp,"<<harga<<endl;
			cout<<"Silahkan masukkan jumlah harga yang Anda inginkan \n";
			cin>>harga;
			total = harga * bir ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga bir hitam \n";
				cout<<"dengan jumlah harga yang diinginakn "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga bir hitam \n";
				cout<<"dengan jumlah harga yang diinginakn "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto kedai;
			}
			break;
			case 3 :
			cout<<"Anda memilih ke amer penghilang stres \n";
			cout<<"Dengan Harga harga rp,"<<amer<<endl;
			cout<<"Silahkan masukkan jumlah harga yang Anda inginkan \n";
			cin>>harga;
			total = harga * amer ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga amer penghilang stres \n";
				cout<<"dengan jumlah harga yang diinginakn "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli harga amer penghilang stres \n";
				cout<<"dengan jumlah harga yang diinginkan "<<harga<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto kedai;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto kedai;
			}
			break;
			default:
				cout<<"masukkan nomor pesanan wisata yang sesuai \n";
				system("pause");
				system("cls");
				goto kedai;
	}
	return 0;
	
}







