#include <iostream>
using namespace std;

int main () {
	float berat;
 int tinggi;
 
 cout << "Masukkan tinggi badan dalam cm : ";
 cin >> tinggi;
 
 cout << "Masukkan berat badan dalam kg : ";
 cin >> berat; 
 
 if (berat<tinggi/2.5) {
  cout << "Hasil : Kurus " << endl;
 }
 else if  (tinggi/2.5 <= berat <= tinggi/2.3) {
  cout <<  "Hasil : Normal" << endl; 
 }
 
 else if (tinggi/2.3 < berat)
  cout << "Hasil : Gemuk" << endl;
 
}
