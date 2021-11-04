#include <iostream>
using namespace std;
int main(){
	int Produk,jumlah;
	char Pilihan;
	awal:
		cout<<"======Selamat Datang Di Hijab Chic Official======"<<endl;
		
		cout<<" Produk Yang Dapat Anda Order : "<<endl;
		cout<<" 1. French Khimar Syar'i "<<endl;
		cout<<" 2. Hijab Segi Empat Voal Motif "<<endl;
		cout<<" 3. Bergo Sporty Jersey "<<endl;
		
		cout<<" Masukkan Produk Pilihan Anda : ";
		cin>>Produk;
	  switch(Produk){
		case 1:
			cout<< "Masukkan jumlah French Khimar yang akan anda order : ";
			cin>>jumlah;
			system("cls");
			cout<<" French Khimar Syar'i sebanyak "<<jumlah<<" Pcs Berhasil Anda Order ";
			
			Tambah_FrenchKhimar :
				cout<<" Apakah anda ingin mengganti jumlah pemesanan French Khimar yang telah dipilih? (y/n) "<<endl;
				cout<<" Masukkan Pilihan Anda : "<<endl;
				cin>>Pilihan;
				if(Pilihan=='y'){
					system("cls");
					goto awal;
				}   else if(Pilihan=='n'){
					system("cls");
					cout<<" Terimakasih Telah Order ";
				}   else {
					cout<< "Opsi yang anda masukkan salah";
					goto awal;
				}
				break;
    	
		case 2:
			cout<< "Masukkan jumlah Hijab yang akan anda order : ";
			cin>>jumlah;
			system("cls");
			cout<<" Hijab Segi Empat Voal Motif "<<jumlah<<" Pcs Berhasil Anda Order ";
			
			ganti_Hijab :
				cout<<" Apakah anda ingin mengganti jumlah pemesanan Hijab yang telah anda pilih? (y/n) "<<endl;
				cout<<" Masukkan Pilihan Anda : "<<endl;
				cin>>Pilihan;
				if(Pilihan=='y'){
					system("cls");
					goto awal;
				}   else if(Pilihan=='n'){
					system("cls");
					cout<<" Terimakasih Telah Order ";
				}   else {
					cout<< "Opsi yang anda masukkan salah";
					goto awal;
				}
				break;
			
	    case 3:
			cout<< "Masukkan jumlah Bergo yang akan anda order : ";
			cin>>jumlah;
			system("cls");
			cout<<" Bergo Sporty Jersey "<<jumlah<<" Pcs Berhasil Anda Order ";
			
			Tambah_Hijab :
				cout<<" Apakah anda ingin mengganti jumlah pemesanan Bergo yang telah anda pilih? (y/n) "<<endl;
				cout<<" Masukkan Pilihan Anda : "<<endl;
				cin>>Pilihan;
				if(Pilihan=='y'){
					system("cls");
					goto awal;
				}   else if(Pilihan=='n'){
					system("cls");
					cout<<" Terimakasih Telah Order ";
				}   else {
					cout<< "Opsi yang anda masukkan salah";
					goto awal;
				}
				break;
				
			default:
				system("cls");
				cout<<"Opsi yang anda masukkan Invalid"<<endl;
				goto awal;
			
	}
}
