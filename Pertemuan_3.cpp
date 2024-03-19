#include <iostream>
using namespace std;

int main(){
float berat, tinggi, bmi;
cout << "Masukkan berat anda :";
cin >> berat;
cout << "Masukkan tinggi anda :";
cin >> tinggi;
bmi = berat/(tinggi*tinggi);
cout << "BMI anda adalah" << bmi << endl;
if(bmi<18,5){cout << "berat badan anda kurang";}
else if(bmi>=18,5 && bmi < 25){cout << "berat badan anda normal";}
else if(bmi>=25 && bmi < 30){cout << "berat badan berlebuh";}
else {cout << "anda obesitas";}
}