#include <iostream>
using namespace std;

class yerlesimBirimi {
public:
	string isim;
	double nufus,dogum,olum;

	void isimAta() {
		cout << "yerlesim biriminin ismini giriniz : ";
		cin >> isim;
	}
	
	void nufusAta() {
		cout << "nufusu giriniz : ";
		cin >> nufus;
	}

	void dogumAta() {
		cout << "Dogum sayisini giriniz : ";
		cin >> dogum;
	}

	void olumAta() {
		cout << "olum sayisini giriniz : ";
		cin >> olum;
	}

	double dogumOrani() {

		return dogum / nufus;
	}

	double olumOrani() {
		return olum / nufus;

	}

};

int main()
{
 
	yerlesimBirimi birim;
	birim.isimAta();
	birim.nufusAta();
	birim.dogumAta();
	birim.olumAta();
	cout<< birim.isim<<" dogum orani : " << birim.dogumOrani()<<endl;
	cout <<birim.isim<<" olum orani : " << birim.olumOrani();

}

