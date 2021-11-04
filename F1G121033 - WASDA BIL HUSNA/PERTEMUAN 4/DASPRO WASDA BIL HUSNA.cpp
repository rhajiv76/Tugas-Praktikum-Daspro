#include<iostream>
using namespace std;
int main(){
	int garudafutsal,HMBfutsal,metrofutsal,a,sewa,bayar,total;
	char y;
	//harga sewa lapangan
	garudafutsal =  100000 ;
	HMBfutsal = 150000;
	metrofutsal = 250000 ;
	lapanganfutsal :
	cout<<"************************************************************* \n";
	cout<<"========= Selamat Datang di program pembookingan lapangan======== \n";
	cout<<"************************************************************* \n";
	cout<<"1. garuda futsal \n2. HMB futsal \n3.metro futsal \n";
	cout<<"============================================================= \n";
	cout<<"Silahkan Masukkan Tujuan lapangan anda\n";
	cin>>a;
	switch (a){
		case 1 :
			cout<<"Anda memilih garuda futsal\n";
			cout<<"Dengan Harga sewa rp,"<<garudafutsal<<endl;
			cout<<"Silahkan masukkan harga sewa \n";
			cin>>sewa;
			total = sewa * garudafutsal ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa garuda futsal \n";
				cout<<"dengan jumlahsewa yang diinginakn "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa garuda futsal \n";
				cout<<"dengan jumlah sewa yang diinginakn "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di hari lain \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pembookingan \n";
				system("pause");
				system("cls");
				goto lapanganfutsal;
			}
			break;
			case 2 :
			cout<<"Anda memilih ke HMB futsal \n";
			cout<<"Dengan Harga sewa rp,"<<HMBfutsal<<endl;
			cout<<"Silahkan masukkan jumlah sewa yang Anda inginkan \n";
			cin>>sewa;
			total = sewa * HMBfutsal;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa lapangan HMB futsal \n";
				cout<<"dengan jumlah sewa yang diinginakn "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa lapangan HMB futsal \n";
				cout<<"dengan sewa yang diinginakn "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pembookingan anda \n";
				system("pause");
				system("cls");
				goto lapanganfutsal;
			}
			break;
			case 3 :
			cout<<"Anda memilih metro futsal \n";
			cout<<"Dengan Harga sewa rp,"<<metrofutsal<<endl;
			cout<<"Silahkan masukkan sewa yang Anda inginkan \n";
			cin>>sewa;
			total =sewa * metrofutsal;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa lapangan metro futsal \n";
				cout<<"dengan sewa yang diinginakn "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk menyewa lapangan metro futsal \n";
				cout<<"dengan sewa yang diinginkan "<<sewa<<endl;
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
					goto lapanganfutsal;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pembookingan \n";
				system("pause");
				system("cls");
				goto lapanganfutsal;
			}
			break;
			default:
				cout<<"masukkan tujuan lapangan yang sesuai \n";
				system("pause");
				system("cls");
				goto lapanganfutsal;
	}
	return 0;
	
}







