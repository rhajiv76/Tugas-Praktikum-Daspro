#include <iostream>


using namespace std;

int main()

{
	cout<<"SAHRUL"<<endl ;
	cout<<"F1G121083"<<endl ;
	cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl ;
	cout<<"===== Halaman Registrasi =====" << endl;
	cout<<"Username: Sahrul" << endl ;
	cout<<"Password: Ilkom" << endl ;
	
	
	cout<<"====== Halaman Login ======" << endl ;
    system("color d");
    string user, pass;
 
    cout<<"Masukkan USERNAME : "; cin>>user;
    cout<<"Masukkan PASSWORD : "; cin>>pass;
 
    if(user == "Sahrul" && pass == "Ilkom"){
       cout<<"\n\Selamat Datang Tuan >///< "<<endl;
    }
  
    else{
       cout<<"Tidak dikenal. Password atau Username yang anda gunakan tidak terdaftar";
    }


 return 0; 

}

