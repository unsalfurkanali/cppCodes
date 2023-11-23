#include <iostream>

using namespace::std;

int main(int argc, char *argv[]) {
	
	int sayi1, sayi2;
	float sonuc;
	char islem;
	
	cout << "***********************************************" << endl;
	cout << "********************Menu***********************" << endl;
	cout << " + : Toplama islemi" << endl;
	cout << " - : Cikarma islemi" << endl;
	cout << " * : Carpma islemi" << endl;
	cout << " / : Bolme islemi" << endl;
	cout << "Lutfen yapmak istediginiz islemi giriniz : ";
	cin >> islem;
	cout << "Birinci sayiyi giriniz : ";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz : ";
	cin >> sayi2;
	
	switch( islem )
	{
		/*  6 + 4 = 10*/
		case '+':
			sonuc = sayi1+sayi2;
			cout << sayi1 << "+" << sayi2 << "=" << sonuc << endl;
			break;
		case '-':
			sonuc = sayi1-sayi2;
			cout << sayi1 << "-" << sayi2 << "=" << sonuc << endl;
			break;
		case '*':
			sonuc = sayi1*sayi2;
			cout << sayi1 << "*" << sayi2 << "=" << sonuc << endl;
			break;
		case '/':
			if ( sayi2 == 0 )
			{
				cout << "Ikinci sayi sifir olamaz!!\a\a" << endl;
			}
			else
			{
				sonuc = (float)sayi1/(float)sayi2;
				cout << sayi1 << "/" << sayi2 << "=" << sonuc << endl;
			}
			break;
		default:
			cout << "Bu islem tanimli degildir.";
			break;
	}
	
	
	return 0;
}
