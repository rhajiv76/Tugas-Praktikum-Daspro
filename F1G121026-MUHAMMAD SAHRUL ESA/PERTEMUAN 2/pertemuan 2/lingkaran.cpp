#include <iostream>
using namespace std;


int main(){
    //const untuk mendeklarasikan nilai tetap
    const float phi = 3.14;
    float L,r;
    
    //vaule r
    cout <<"masukan jari-jari lingkaran = ";
    cin >>r;
   
    //proses perhitungan luas
    L = phi * r * r;
    
    //pelengkap
    cout <<"diketahui lingkaran dengan = "<<endl;
    cout <<"phi \t= "<<phi<<endl;
    cout <<" r \t = "<<r<<endl;
    cout <<"========================"<<endl;
    
    //penampilan hasil
    cout <<"luas lingkaran dengan jari-jari " <<r<< " cm "<< "adalah ";
    cout <<L<< " cm2" ;  

}