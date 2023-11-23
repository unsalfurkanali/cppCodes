#include <iostream>

using namespace::std;

int main(int argc, char *argv[]) {
	
	int sayiAdedi = 0;
	int toplam = 0;
	int sayi = 0;
	float ortalama = 0;
	
	
	while(1)
	{
		cout << "Bir sayi giriniz = "; 
		cin >> sayi;
		toplam = toplam + sayi;
		sayiAdedi++;
		ortalama =  ( (float)toplam / (float)sayiAdedi );
		cout << "Girilen sayilarin ortalamasi = " << ortalama << endl;
	}
	return 0;
}
