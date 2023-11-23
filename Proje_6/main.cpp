#include <iostream>

using namespace::std;

int main(int argc, char *argv[]) {

	int i, j;
	int toplam = 2;
	int kalan  = 0;
	
	for (i = 3; i < 100000; i++)
	{
		for (j = 2; j < i; j++)
		{
			if ( i % j == 0)
			{
				kalan++;
			}
		}
		if( kalan == 0)
		{
			cout << i << "Sayisi bir asal sayidir." << endl;
			toplam = toplam + i;
		}
		kalan = 0;
	}
	cout << "100000'e kadar olan asal sayilarin toplami = " << toplam << endl ;
	
	return 0;
}
