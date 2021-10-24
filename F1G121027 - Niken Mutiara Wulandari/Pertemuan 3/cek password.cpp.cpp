#include <iostream>
#include <string>

using namespace std;

int main (){
	
	string username = "";
	string password = "";
	bool loginSuccess = false;
	
	cout << "\tHai! silahkan Log in dibawah.\n\n";
	
	do{
		cout << "username: ";
		cin >> username;
		cout << "password: ";
		cin >> password;
		
		if(username == "Niken" && password == "nikenmw"){
			cout << "\nHalo Niken Mutiara\n\n";
			loginSuccess = true;
			}
		else{
			cout << "username dan Password salah \n";
			cout << "silahkan coba lagi.";
			} 
		
		} while(!loginSuccess);
		
	system("pause");
	return 0;	
	}

