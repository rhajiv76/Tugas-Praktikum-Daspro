#include <iostream>
//== NAMA : LA ODE RINDI ASWANDI_==//
//==NIM : F1G121069==//

	using namespace std;
	
int main(){

	system("color a");
	int inputuser,jumlah;
	char pilihan;
	
	cout<<endl;
	awal:
	cout<<"============DAFTAR KELAS TIKET KERETA API============"<<endl;
	cout<<endl;
	cout<<"=====MENU TIKET====="<<endl;
	cout<<endl;
	cout<<" 1. EKONOMI "<<endl;
	cout<<" 2. BISNIS "<<endl;
	cout<<" 3. EKSEKUTIF"<<endl;
	cout<<endl;
	
	cout<<"masukan pilihan anda =";
	cin>>inputuser;
	
	switch (inputuser){
		case 1:
	
			cout<<"harga menu Rp.170.000/orang";
			cout<<" masukan jumlah pesanan anda= ";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*170000<<endl;
			cout<<"tiket kelas ekonomi "<<jumlah*170000<<"pemesanan anda berhasil"<<endl;
			ulang_tiket_kelas_ekonomi:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan tiket kami :)";
			cout<<endl;
			cout<<" selamat bergabung :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_tiket_kelas_ekonomi;
			}
	 		break;
		case 2:
			cout<<"harga menu Rp.250.000/orang";
			cout<<" masukan jumlah pesanan anda = ";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*250000<<endl;
			cout<<" tiket kelas bisnis "<<jumlah*250000<<"pemesanan anda berhasil"<<endl;
			ulang_tiket_kelas_bisnis:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan tiket kami :)";
			cout<<endl;
			cout<<" selamat bergabung :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_tiket_kelas_bisnis;
			}
	 	break;
	case 3:	
			cout<<"harga menu Rp.300.000/orang";
			cout<<" masukan jumlah pesanan anda =";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*300000<<endl;
			cout<<" tiket kelas eksekutif "<<jumlah*300000<<"pemesanan anda berhasil"<<endl;
			ulang_tiket_kelas_eksekutif:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan tiket kami :)";
			cout<<endl;
			cout<<" selamat bergabung :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_tiket_kelas_eksekutif;
			}
			break;
			default:
			system("cls");
			cout<<"input yang anda masukan salah"<<endl;
			goto awal;
	}
	
}
