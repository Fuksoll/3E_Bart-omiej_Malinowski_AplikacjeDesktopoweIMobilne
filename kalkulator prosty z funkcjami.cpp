#include <iostream>

using namespace std;

//+
double dodawanie(double a, double b) {
	return a + b;
}
//-
double odejmowanie(double a, double b) {
	return a - b;
}
//*
double mnozenie(double a, double b) {
	return a * b;
}
//%
double dzielenie(double a, double b) {
	if (b != 0) {
		return a / b;
	}
	else{
		cout << "blad dzielenie przez 0" << endl;
		return 0;
	}
}
//wykonanie
double wykonanie(double a, double b, char wykonaj) {
	switch (wykonaj) {
	case '+':
		return dodawanie(a, b);
	case '-':
		return odejmowanie(a, b);
	case '*':
		return mnozenie(a, b);
	case '/':
		return dzielenie(a, b);
	}
}
int main() {
	double liczba1, liczba2;
	char wykonaj;

	cout << "podaj liczbe1" << endl;
	cin >> liczba1;

	cout << "podaj liczbe2" << endl;
	cin >> liczba2;

	cout << "wybierz sposob:( + , - , * , / )" << endl;
	cin >> wykonaj;

	double wynik = wykonanie(liczba1, liczba2, wykonaj);
	cout << "wynik " << wynik << endl;

	return 0;
}