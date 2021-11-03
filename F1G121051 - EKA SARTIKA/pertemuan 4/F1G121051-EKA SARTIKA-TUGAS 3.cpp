#include<iostream>
using namespace std;

int main (){
	int jalur_masuk, pendaftaran_1, pendaftaran_2, pendaftaran_3 ;
	char pilihan;
	
	awal:
	cout<<"=====================PEMILIHAN JALUR MASUK KULIAH======================"<<endl;
	cout<<"1.Jalur snmptn"<<endl<<"2.Jalur sbmptn"<<endl<<"3.Jalur smmptn"<<endl;
    cout<<"silahkan cek nominal pembayaran di bawah ini :"<<endl;
    cout<<"pendaftaran_1 = 150000"<<endl;
    cout<<"pendaftaran_2 = 250000"<<endl;
    cout<<"pendaftaran_3 = 400000"<<endl;
    cout<<"======================================================================"<<endl;
	cout<<"masukkan pilihan jalur_masuk yang ingin anda ambil = ";
	cin>>jalur_masuk;
	switch(jalur_masuk){
     	case 1:
			cout<<"masukkan jumlah uang pendaftaran yang sesuai dengan jalur_masuk yang anda pilih :";
			cin>>pendaftaran_1;
			system("cls");
			cout<<"selanjutnya anda akan menerima kode pembayaran pendaftaran tersebut "<<endl;
			cout<<"apakah anda ingin mengulang kembali pilihan jalur_masuk sebelum menerima kode bayar ?? (y/n)"<<endl;
			cout<<"masukkan pilihan anda: ";
			cin>>pilihan;
			 if(pilihan == 'y'){
			  system("cls");
			  goto awal;
		    }else if(pilihan == 'n'){
		      system("cls");
		      cout<<"terima kasih anda akan menerima kode pembayaran dan segeralah bayar sebelum kode kedaluwarsa "<<endl;
		    }else {
		      cout<<"pilihan yang anda masukkan salah "<<endl;
		      goto awal;
		    }
		      break;
		    
		case 2:
			cout<<"masukkan jumlah uang pendaftaran yang sesuai dengan jalur_masuk yang anda pilih :";
			cin>>pendaftaran_2;
			system("cls");
			cout<<"selanjutnya anda akan menerima kode pembayaran pendaftaran tersebut "<<endl;
			cout<<"apakah anda ingin mengulang kembali pilihan jalur_masuk sebelum menerima kode bayar ?? (y/n)"<<endl;
			cout<<"masukkan pilihan anda: ";
			cin>>pilihan;
			 if(pilihan == 'y'){
			  system("cls");
			  goto awal;
		    }else if(pilihan == 'n'){
		      system("cls");
		      cout<<"terima kasih anda akan menerima kode pembayaran dan segeralah bayar sebelum kode kedaluwarsa "<<endl;
		    }else {
		      cout<<"pilihan yang anda masukkan salah "<<endl;
		      goto awal;
		    }
		      break;
		      
		case 3:
		   	cout<<"masukkan jumlah uang pendaftaran yang sesuai dengan jalur_masuk yang anda pilih :";
			cin>>pendaftaran_3;
			system("cls");
			cout<<"selanjutnya anda akan menerima kode pembayaran pendaftaran tersebut "<<endl;
			cout<<"apakah anda ingin mengulang kembali pilihan jalur_masuk sebelum menerima kode bayar ?? (y/n)"<<endl;
			cout<<"masukkan pilihan anda: ";
			cin>>pilihan;
			 if(pilihan == 'y'){
			  system("cls");
			  goto awal;
		    }else if(pilihan == 'n'){
		      system("cls");
		      cout<<"terima kasih anda akan menerima kode pembayaran dan segeralah bayar sebelum kode kedaluwarsa "<<endl;
		    }else {
		      cout<<"pilihan yang anda masukkan salah "<<endl;
		      goto awal;
		    }
		      break;
		      
		    default :
		    	system("cls");
		    	cout<<"pilihan jalur_masuk yang anda inginkan tidak tersedia"<<endl;
		    	cout<<"silahkan pilih jalur_masuk yang telah tersedia !"<<endl;
		    	cout<<"\n";
				goto awal;
		    	
				
			}
		}
			
		    	
		    
		    		 
	        
	           
