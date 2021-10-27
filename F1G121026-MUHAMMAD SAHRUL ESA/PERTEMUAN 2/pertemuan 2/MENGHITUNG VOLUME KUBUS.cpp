#include <iostream>
using namespace std;


int main(int argc,char *argv[])
{
    int s;
    float volume_kubus;
    
    cout << " menghitung volume kubus " <<endl;
    
    cout << " masukan nilai sisi (s) = ";
    cin >> s;
    
    volume_kubus = s * s * s;
    
    cout << " volume kubus dengan sisi " << s << " cm " << " adalah " << volume_kubus << " cm3 " <<endl;
    
    system ("pause");
    return 0;
}