#include <iostream>

using namespace::std;


int main(int argc, char *argv[]) {
	int i, j;
	int dizi[5] = {0};
	
	for (i = 0; i < 5; i++)
	{
		cout << "Dizinin " << i << ".elemanini giriniz : ";
		cin >> dizi[i];
	}
	
	cout << "Eleman\tDeger\tHistogram\n";
	
	for(i = 0; i < 5; i++)
	{
		cout << i << "\t" << dizi[i] << "\t";
		for(j = 0; j < dizi[i]; j++)
		{
			cout << "*";		
		}
		cout << "\n";
	}
	
	

	return 0;
}
