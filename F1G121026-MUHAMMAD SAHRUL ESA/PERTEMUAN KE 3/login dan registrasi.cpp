#include<iostream>
using namespace std;
int main(){
 
  cout<<"==================================="<<endl;
  cout<<"PROGRAM MUHAMMAD SAHRUL ESA"<<endl;
  cout<<"NIM     : F1G121026 "<<endl;
  cout<<"Jurusan : ILMU KOMPUTER "<<endl;
  cout<<"==================================="<<endl;
  
  string username,username1, password, password1, password2,masuk;
  ulang: 
    
    //HALAMAN Registrasi
    cout<<"============ Halaman Registrasi ============"<<endl;
    cout<<" Username = ";
    getline(cin, username);
    cout<<" Password = ";
    getline(cin, password);
    cout<<"Akun yang anda buat Terdaftar"<<endl;
    cout<<"Silahkan Login"<<endl;
    cout<<"\n\n";
    coba_lagi :
     
     
     
     
     //Halaman Login
     cout<<"============ Halaman Login ============"<<endl;
     cout<<" Username = ";
     getline(cin, username1);
     cout<<" Password = ";
     getline(cin, password2);
     cout<<"\n";
      
      
        if (username1 == username && password2 == password){
          cout<<"username dan passwordnya Benar => Halo "<<username<<"!"<<endl;
          cout<<" ============TERIMAH KASIH TELAH MENGUNAKAN PROGRAM KAMI============ "<<endl;
          cout<<"Apakah Anda Ingin Mengulang Program ? "<<endl;
          cout<<"ketik (ya) kembali login,ketik (tidak) selesai, ketik (kembali) untuk mengulang buat akun : ";
          getline(cin,masuk);
            if(masuk == "ya"){
              cout<<"Kembali Ke Halaman Login"<<endl;
              cout<<"\n\n";
              goto coba_lagi;
            }
            else;          
      }
        else{
          cout<<"password atau username salah"<<endl;
          cout<<" ============TERIMAH KASIH TELAH MENGUNAKAN PROGRAM KAMI============ "<<endl;
          cout<<"Apakah Anda Ingin Mengulang Program  ? "<<endl;
          cout<<"ketik (ya) kembali login,ketik (tidak) selesai,ketik (kembali) untuk mengulang buat akun : ";
          getline(cin,masuk);
        }
        
            if(masuk == "ya"){
              cout<<"Kembali Kehalaman Login \n";
              cout<<"\n\n";
              goto coba_lagi;
              
              
            }
            else if (masuk == "kembali"){
              cout<<"Kembali Ke Halaman Registrasi \n";
              cout<<"\n\n";
              goto ulang;
            
            }
            else
         return 0; 
         
}