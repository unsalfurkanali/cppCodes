#include <iostream>

using namespace::std;

int main(int argc, char *argv[]) {
	
	/* boy metre olarak girilsin*/
	/* agirlik kg olarak girilsin*/
	float boy,kilo;
	float vki;
	
	/* boy bilgisi aliniyor*/
	cout << "Boyunuzu giriniz : ";
	cin >> boy;
	
	/*kilo bilgisi aliniyor*/
	cout << "Kilonuzu giriniz :";
	cin >> kilo;
	
	/* vki = kilo / (boy^2)*/
	vki = kilo / (boy*boy);
	cout << "Vucut kitle endeksiniz : " << vki << endl;
	
	/*endeks degerlendirme*/
	if(vki <= 18.5)
	{
		cout << "Zayif";
	}
	else if( vki > 18.5 && vki <= 24.9 )
	{
		cout << "Normal";
	}
	else if( vki >= 25.0 && vki <= 29.9 )
	{
		cout << "Kilolu";
	}
	else if( vki >= 30.0  && vki <= 34.9 )
	{
		cout << "Birinci derece obez!!!";
	}
	else if( vki >= 35.0 && vki <= 39.9 )
	{
		cout << "Ikinci derece obez!!!??";
	}
	else if( vki >= 40 )
	{
		cout << "Ucuncu derece obez!!!??";
	}
	
	
	
	return 0;
}
