#include <iostream>
using namespace std;

int main(){

	int es, Jumlah_es, harga_1, harga_2, harga_3,harga_4,harga_total;
	char pilihan;
	awal:
	cout<<"============================== KEDAI ANEKA ES KENDARI========================== "<<endl;
	cout<<endl;
	cout<<" Selamat datang di di aneka es kendari silahakan memesan menu anda di daftar menu"<<endl;
	cout<<endl;
	cout<<" Daftar menu = "<<endl;
	cout<<" 1. es coklat toping oreo Rp 15.000 " <<endl;
	cout<<" 2. es vanila blue   Rp 10.000 " <<endl;
	cout<<" 3. es durian toping coklat Rp15.000 " <<endl;
	cout<<" 4. es brown sugar Rp.20.0000"<<endl;
	cout<<endl;
	harga_1 = 15000;
	harga_2 = 10000;
	harga_3 = 15000;
	harga_4 = 20000;
	cout<<"masukkan pilihan menu anda = ";
	cin >> es;
	switch(es){
		case 1:
			cout<<"masukkan jumlah es yang ingin anda pesan = ";
			cin>>Jumlah_es;{
			system ("cls");
			}harga_total = Jumlah_es * harga_1;
			cout<< "harga_total = "<< Jumlah_es * harga_1<< " Rp "<<endl;
			cout<<" es coklat toping oreo " << Jumlah_es << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			es_coklat_toping_oreo:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }		else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah memesan di kedai es kami"<<endl;
		    		cout<<endl;
		    		cout<<"selamat menikmati +_+"<<endl;
			}			else{
						cout<<"pilihan yang anda masukkan salah";
							goto es_coklat_toping_oreo;
			}
		break;
			case 2:
			cout<<"masukkan jumlah es yang ingin anda pesan = ";
			cin>>Jumlah_es;{
			system ("cls");
			}harga_total = Jumlah_es * harga_1;
			cout<< "harga_total = "<< Jumlah_es * harga_1<< " Rp "<<endl;
			cout<<" es vanilla blue " << Jumlah_es << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			es_vanilla_blue:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }		else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah memesan di kedai es kami"<<endl;
		    		cout<<endl;
		    		cout<<"selamat menikmati +_+"<<endl;
			}			else{
						cout<<"pilihan yang anda masukkan salah";
							goto es_vanilla_blue;
			}
		break;
			case 3:
			cout<<"masukkan jumlah es yang ingin anda pesan = ";
			cin>>Jumlah_es;{
			system ("cls");
			}harga_total = Jumlah_es * harga_1;
			cout<< "harga_total = "<< Jumlah_es * harga_1<< " Rp "<<endl;
			cout<<" es durian toping cokelat " << Jumlah_es << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			es_durian_toping_cokelat:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }		else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah memesan di kedai es kami"<<endl;
		    		cout<<endl;
		    		cout<<"selamat menikmati +_+"<<endl;
			}			else{
						cout<<"pilihan yang anda masukkan salah";
							goto es_durian_toping_cokelat;
			}
		break;
		case 4:
			cout<<"masukkan jumlah es yang ingin anda pesan = ";
			cin>>Jumlah_es;{
			system ("cls");
			}harga_total = Jumlah_es * harga_1;
			cout<< "harga_total = "<< Jumlah_es * harga_1<< " Rp "<<endl;
			cout<<" es brown sugar" << Jumlah_es << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			es_brown_sugar:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }		else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah memesan di kedai es kami"<<endl;
		    		cout<<endl;
		    		cout<<"selamat menikmati +_+"<<endl;
			}			else{
						cout<<"pilihan yang anda masukkan salah";
							goto es_brown_sugar;
			}
			break;
			default:
			cout<<"Masukkan Nomor Pesanan Yang sesuai \n";

	}
}
