#include<iostream>

using namespace std;

int main(){
		string Dwi_Irman_Saputra1, Dwi_Irman_Saputra, F1G1210501, F1G121050, repass, kembali;
	int Pilihan_Saya;
	
	
	menu:
		cout<<"\t \t Menu"<<endl;
		cout<<"Registrasi 1"<<endl;
		cout<<"Login 2"<<endl;
		cout<<"Input Pilihan : ";
		cin>>Pilihan_Saya;
		
		switch(Pilihan_Saya){
			case 1:
				goto Registrasi;
				break;
				
			case 2:
				goto Login;
				break;
				
			default:
				cout<<"Tulis Ulang Pilihan"<<endl;
				goto menu;
				
				
	Registrasi:
		cout<<"Akun Anda perlu di REGISTRASI"<<endl;
		cout<<"Silahkan Masukan Username Anda : ";
		cin>>Dwi_Irman_Saputra;
		cout<<"Silahkan Masukan Password Anda : ";
		cin>>F1G121050;
		cout<<"Konfirmasi Password : ";
		cin>>repass;
			if(repass==F1G121050){
				cout<<"Selamat Akun Anda Berhasil Diregstrasi"<<endl;
				goto Login;
				cout<<endl;
			}
			else
				cout<<"Password Anda Salah, Silahkan Registrasi Kembali"<<endl;
				goto Registrasi;
				return 1;
				
				
	Login:
		cout<<"\t Login"<<endl;
		cout<<"Silahkan Masukan Username Anda : ";
		cin>>Dwi_Irman_Saputra1;
		cout<<"Silahkan Masukan Password Anda : ";
		cin>>F1G1210501;
		cout<<endl;
		if((Dwi_Irman_Saputra1==Dwi_Irman_Saputra)&& (F1G1210501==F1G121050)){
			cout<<"Halo User "<<Dwi_Irman_Saputra1;
			goto wellcome;
		}
		else if ((Dwi_Irman_Saputra1==Dwi_Irman_Saputra)&& (F1G1210501==F1G121050)){
			cout<<"Maaf Username atau Password Anda Salah. "<<endl;
			cout<<"Silahkan Cek Ulang Username atau Password Anda"<<endl;
			cout<<"Jika Akun Anda Belum Teregistrasi. Sialhakn Menekan Nomor Satu diMenu Untuk Registrasi "<<endl;
			goto menu;
		}
		else
		cout<<":Login Gagal. Pastika Username atau Password Anda Sudah Benar "<<endl;
		goto Login;
		
		
	wellcome:
		cout<<"Halo User "<<Dwi_Irman_Saputra1;
		cout<<endl<<endl;
		cout<<"Anda Ingin Kembali Ke Menu  ? y/n ";
		cin>>kembali;
		if (kembali=="y"){
			cout<<"kembali ke Menu !";
			cout<<endl<<endl;
			goto menu;
		}
		else if (kembali=="n"){
			cout<<"Batal ! "<<endl;
			cout<<endl<<endl;
			goto wellcome;
		}
		else
		goto wellcome;
		
		return 0;
		}
}
	

