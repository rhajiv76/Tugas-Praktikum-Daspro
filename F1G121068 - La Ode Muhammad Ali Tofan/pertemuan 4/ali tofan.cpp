#include<iostream>
using namespace std;
int main(){
	const int ayam=10000,ayamjumbo=18000,ayampedas=15000;
	int pilih,jumlah;
	char input;
	awal:
	cout<<"============== Warung Ayam Geprek ================== \n";
	cout<<"1. Ayam Geprek Rp."<<ayam <<"\n2. Ayam Jumbo Rp."<<ayamjumbo<< "\n3. Ayam Pedas Rp."<<ayampedas<<endl;
	cout<<"======================================================== \n";
	cout<<"Masukkan Pilihan Pesanan Anda : ";
	cin>>pilih;
	switch(pilih){
		case 1:
			cout<<"Anda memilih pesanan ayam geprek dengan harga Rp."<<ayam<<endl;
			cout<<"Total pesanan : ";
			cin>>jumlah;
			cout<<"Jumlah yang Anda bayar Rp."<<jumlah*ayam<<endl;
			ulang:
			cout<<"Apakah Anda ingin memesan ulang ?(Y,N) : ";
			cin>>input;
			if(input=='Y'){
				cout<<"Anda bersedia mengulang \n";
				system("cls");
				goto awal;
			}
			else if(input=='N'){
				system("cls");
				cout<<"Terimakasih sudah memesan diwarung kami\n";
			}
			else{
				cout<<"Input (Y/N) \n";
				goto ulang;
			} 
			break;
		case 2:
			cout<<"Anda memilih pesanan ayam jumbo dengan harga Rp."<<ayamjumbo<<endl;
			cout<<"Total pesanan : ";
			cin>>jumlah;
			cout<<"Jumlah yang Anda bayar Rp."<<jumlah*ayamjumbo<<endl;
			ulang1:
			cout<<"Apakah Anda ingin memesan ulang ?(Y,N) : ";
			cin>>input;
			if(input=='Y'){
				cout<<"Anda bersedia mengulang \n";
				system("cls");
				goto awal;
			}
			else if(input=='N'){
				system("cls");
				cout<<"Terimakasih sudah memesan diwarung kami\n";
			}
			else{
				cout<<"Input (Y/N) \n";
				goto ulang1;
			}
			break; 
		case 3:
			cout<<"Anda memilih pesanan ayam pedas dengan harga Rp."<<ayampedas<<endl;
			cout<<"Total pesanan : ";
			cin>>jumlah;
			cout<<"Jumlah yang Anda bayar Rp."<<jumlah*ayampedas<<endl;
			ulang2:
			cout<<"Apakah Anda ingin memesan ulang ?(Y,N) : ";
			cin>>input;
			if(input=='Y'){
				cout<<"Anda bersedia mengulang \n";
				system("cls");
				goto awal;
			}
			else if(input=='N'){
				system("cls");
				cout<<"Terimakasih sudah memesan diwarung kami\n";
			}
			else{
				cout<<"Input (Y/N) \n";
				goto ulang2;
			} 
			break;
		default:
			system("cls");
			goto awal;

}
	return 0;
}

