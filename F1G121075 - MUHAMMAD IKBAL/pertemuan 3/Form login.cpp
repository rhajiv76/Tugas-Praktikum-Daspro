#include<iostream>
#include<conio.h>
using namespace std;

int main() {
int i;
char ch;
cout<<"=================================\n";
cout<<"Selamat Datang di Form Login \n";
cout<<"=================================\n";
    for (i=1; i<=3; i++) {
   	   string user = "";
   	   string pass = "";
   	   cout<<"Username : "; cin>>user;
   	   cout<<"Password : ";
   	       ch = getch();
   	       while(ch != 13){//character 13 is enter
   	       pass.push_back(ch);
   	       cout<<"*";
   	       ch = _getch();
   	        }
   	        
   	   if (user == "IKBAL" && pass == "12345"){
   	      cout<<"\n\nAnda berhasil login. \n";
   	      return 0;
   	   }  else {
   	       	cout<<"\n\nMaaf username dan password yang anda masukkan salah. \n\n";
			  }
		   
   }
   while(i <= 3);
   
   cout<<"Anda telah 3x memasukkan username dan pasword yang salah.\n"<<endl;
   cout<<"Mohon maaf akun anda akan kami blokir untuk sementara. \n";
   cout<<"Silahkan hubungi kami melalui email alita@gmail.com, terimakasih...";
   getch();
}
