//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float p,l;

//Implementasi Prosedur & Fungsi
void Input() {
    cout << "Masukkan sisi Panjang : ";
    cin >> p;
    cout << "Masukkan sisi Lebar : ";
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}
void output (){
    cout << "Hasilnya = " << LuasPersegi();
}