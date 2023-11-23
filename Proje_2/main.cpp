#include <iostream>

using namespace::std;

int main(int argc, char *argv[]) {
	/*
	Cemberin capini al
	Alanini hesapla
	
	alan = pi * r * r
	alan = pi * R/2 * R/2
	*/
	
	float alan;
	float pi = 3.14;
	int cap;
	
	cout << "Cemberin capini giriniz: ";
	cin >> cap;
	
	alan = pi * (cap/2) * (cap/2);
	
	cout << "Cemberin alani = " << alan;
	
	return 0;
}
