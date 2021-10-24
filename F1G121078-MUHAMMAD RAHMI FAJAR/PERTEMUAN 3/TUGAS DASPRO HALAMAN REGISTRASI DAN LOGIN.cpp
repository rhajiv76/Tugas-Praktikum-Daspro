#include <iostream>
#include <conio.h>
	using namespace std;

int main()
{
	system("color a");
	
	//disusun oleh :
	cout<<"Nama	: Muhammad rahmi fajar"<<endl;
	cout<<"Nim	: F1G121078"<<endl;
	cout<<"jurusan : Ilmu komputer"<<endl;
	cout<<"fakultas: FMIPA"<<endl;
	cout<<"Asisten : Mohammad alief"<<endl;
	cout<<endl;
	

	char awal,akhir;
				
		string user1,user2,pass1,pass2;
	do{
		
	cout<<endl;	
	cout<<"===========SELAMAT DATANG DI HALAMAN REGISTRASI==========="<<endl;
	cout<<"=========================================================="<<endl;
	cout<<endl;
	cout<<"buatlah username dan password anda untuk melanjutkan"<<endl;
	cout<<"masukan username anda : "; cin>>user1;
	cout<<"masukan password anda : "; cin>>pass1;
	
	
	cout<<endl;
	cout<<"===========SEKARANG ANDA TELAH MASUK DI HALAMAN LOGIN==========="<<endl;
	cout<<"================================================================"<<endl;
	cout<<endl;
	cout<<"masukan username dan password yang anda telah buat"<<endl;
	cout<<"username : "; cin>>user2;
	cout<<"password : "; cin>>pass2;
	cout<<endl;
	
	if(user2 == user1 && pass1 == pass2)
	{
		cout<<"selamat"<<user2<<endl;
		cout<<"anda telah berhasil login"<<endl;
	}
	else
	{
	cout<<"GAGAL LOGIN,USERNAME DAN PASSWORD ANDA SALAH !!!"<<endl;	
	cout<<endl;
	cout<<"MOHON MASUKAN ULANG USERNAME DAN PASSWORD ANDA "<<endl;
	}
	cout<<"username : "; cin>>user2;
	cout<<"password : "; cin>>pass2;
	cout<<endl;
	if(user2 == user1 && pass1 == pass2){
		cout<<"selamat"<<user2<<endl;
		cout<<"anda telah berhasil login gitu dong ;)"<<endl;
	}
	
	
	
	
	 getch();
    }while(user2 == user1 || pass1 == pass2);


	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

 getch;
 return 0; 

}
