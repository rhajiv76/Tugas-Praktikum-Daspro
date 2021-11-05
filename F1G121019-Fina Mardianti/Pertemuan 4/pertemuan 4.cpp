#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int menu, UTS, UAS, Absensi, Tugas, Quis, RataRata;
	char Pilihan;
	
	cout<<"\n\n ----------DAFTAR NILAI AKHIR----------"<<endl;
	cout<<"\n\n";
    awal:
	cout<<"Masukkan No Absensi : ";
	cin>>menu;
	
	if(menu <= 3)
	{
		cout<<"\n\n menu ";
	}
	else
	{
		cout<<"\n\nMaaf Nomor Hanya Sampai 3 ";
		cout<<"\n\n";
	}
	switch(menu)
	{
		case 1 :
			cout<<"1.FENTI NUR "<<endl;
			cout<<"\n\n";
			cout<<"Masukkan Nilai UTS : ";
			cin>>UTS;
			cout<<"Masukkan Nilai UAS : ";
			cin>>UAS;
			cout<<"Masukkan Nilai Absensi : ";
			cin>>Absensi;
			cout<<"Masukkan Nilai Tugas : ";
			cin>>Tugas;
			cout<<"Masukkan Nilai Quis : ";
			cin>>Quis;
			
			RataRata =(UTS + UAS + Absensi + Tugas + Quis) / 5;
			cout<<"\n\n";
			
			cout<<"Nilai Rata-Rata Yang Didapatkan adalah "<<RataRata<<endl;
			cout<<"\n\n";
			
			if(RataRata>=90)
			{
				cout<<"Anda Mendapatkan Nilai A";
			}
			else if(RataRata>=85)
			{
				cout<<"Anda Mendapatkan Nilai B";
			}
			else if(RataRata>=70)
			{
				cout<<"Anda Mendapatkan Nilai C";
			}
			else if(RataRata>=60)
			{
				cout<<"Anda Mendapatkan Nilai D";
			}
			else if(RataRata<=60)
			{
				cout<<"Maaf Anda Tidak Lulus";
			}
			cout<<"\n\n";
			cout<<"Apakah Anda Ingin Kembali Ke Menu (Y/N) : ";
			cin>>Pilihan;
				if(Pilihan == 'Y')
			{
			system ("CLS");
			goto awal;
			}
			else if(Pilihan == 'N')
    		{
     	cout<<"terimaksih sudah menggunakan program ini";
           	cout<<"\n\n";
		      exit(0);
			} 		
			break;
			
		case 2 :
			cout<<"2.DEWI KEIRANI "<<endl;
			cout<<"\n\n";
			cout<<"Masukkan Nilai UTS : ";
			cin>>UTS;
			cout<<"Masukkan Nilai UAS : ";
			cin>>UAS;
			cout<<"Masukkan Nilai Absensi : ";
			cin>>Absensi;
			cout<<"Masukkan Nilai Tugas : ";
			cin>>Tugas;
			cout<<"Masukkan Nilai Quis : ";
			cin>>Quis;
			
			RataRata =(UTS + UAS + Absensi + Tugas + Quis) / 5;
			cout<<"\n\n";
			
			cout<<"Nilai Rata-Rata Yang Didapatkan adalah "<<RataRata<<endl;
			cout<<"\n\n";
			
			if(RataRata>=90)
			{
				cout<<"Anda Mendapatkan Nilai A";
			}
			else if(RataRata>=85)
			{
				cout<<"Anda Mendapatkan Nilai B";
			}
			else if(RataRata >= 70)
			{
				cout<<"Anda Mendapatkan Nilai C";
			}
			else if(RataRata>=60)
			{
				cout<<"Anda Mendapatkan Nilai D";
			}
			else if(RataRata<=60)
			{
				cout<<"Maaf Anda Tidak Lulus";
			}
			cout<<"\n\n";
			cout<<"Apakah Anda Ingin Kembali Ke Menu (Y/N) : ";
			cin>>Pilihan;
				if(Pilihan == 'Y')
	       {
		    system ("CLS");
		    goto awal;
	       }
	        else if(Pilihan == 'N')
           {
           	cout<<"Terimaksih Sudah Menggunakan Program Ini";
           	cout<<"\n\n";
		      exit(0);
	       } 		
			break;
		
		case 3 :
			cout<<"3.ALDIAN SYAHPUTRA "<<endl;
			cout<<"\n\n";
			cout<<"Masukkan Nilai UTS : ";
			cin>>UTS;
			cout<<"Masukkan Nilai UAS : ";
			cin>>UAS;
			cout<<"Masukkan Nilai Absensi : ";
			cin>>Absensi;
			cout<<"Masukkan Nilai Tugas : ";
			cin>>Tugas;
			cout<<"Masukkan Nilai Quis : ";
			cin>>Quis;
			
			RataRata =(UTS + UAS + Absensi + Tugas + Quis) / 5;
			cout<<"\n\n";
			
			cout<<"Nilai Rata-Rata Yang Didapatkan adalah "<<RataRata<<endl;
			cout<<"\n\n";
			
			if(RataRata>=90)
			{
				cout<<"Anda Mendapatkan Nilai A";
			}
			else if(RataRata>=85)
			{
				cout<<"Anda Mendapatkan Nilai B";
			}
			else if(RataRata >= 70)
			{
				cout<<"Anda Mendapatkan Nilai C";
			}
			else if(RataRata>=60)
			{
				cout<<"Anda Mendapatkan Nilai D";
			}
			else if(RataRata<=60)
			{
				cout<<"Maaf Anda Tidak Lulus";
			}
	cout<<"\n\n";
	cout<<"Apakah Anda Ingin Kembali Ke Menu (Y/N) : ";
	cin>>Pilihan;
	
	if(Pilihan == 'Y')
	{
		system ("CLS");
		goto awal;
	}
	else if(Pilihan == 'N')
    {
		cout<<"terimaksih sudah menggunakan program ini";
           	cout<<"\n\n";
		      exit(0);
	} 		
	getch;
	}
	return 0;
}
