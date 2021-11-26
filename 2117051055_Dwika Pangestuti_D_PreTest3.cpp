#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string StatusBadan;
	float berat;
	float tinggi;
	float BMI;
	cout<<"Berat Badan Anda (Kg)	=";
	cin >> berat;
	cout<<"Tinggi Badan Anda (M)	=";
	cin >> tinggi;
	cout<<"BMI		=" << berat/pow(tinggi,2)<<endl;
	
	if (BMI < 18.5) {
		StatusBadan = "Underweight";
	} else if (BMI > 18.5&&BMI<24.9) {
		StatusBadan = "Normal weight";
	} else if (BMI > 25.0&&BMI<29.9) {
		StatusBadan = "Overweight";
	} else if (BMI > 30.0&&BMI<34.9) {
		StatusBadan = "Obesity Class I";
	} else if (BMI > 35.0&&BMI<39.9) {
		StatusBadan = "Obesity Class II";
	} else if (BMI > 40.0) {
		StatusBadan = "Obesity Class III";
	} else {
	  	StatusBadan;
	  }
	
	cout << "Status Badan Anda	: " <<StatusBadan<< endl;
	
	return 0;
}
