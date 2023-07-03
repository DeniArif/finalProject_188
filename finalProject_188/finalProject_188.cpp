#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {
	
	}
	virtual float Luas(int a) {
		return 0; 
	}
	virtual float Keliling(int a) { 
		return 0; 
	}
	virtual void cekUkuran() {
		return 0; 
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}

};
class Lingkarang :public bidangDatar {
private:

	void input()
	{
		while (true)
		{
			cout << "\nmasukkan jejari\n";
		}
	}
	float LuasLingkaran(float p, float l) {
		return p * l;
	}
	float LuasbidangDatar(float r) {
		return 3.14 * r * r;
	}

	class Persegipanjang :public bidangDatar {
	private:

		void input()
		{
			while (true)
			{
				cout << "\nmasukkan panjang\n";
			}
		}

		float LuasPersegipanjang(float p, float l) {
			return p * l;
		}
		float LuasBidangDatar(float r) {
			return 3.14 * r * r;

		}
	}
};

int main()
{
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;
	do {
		switch (pilihan)
		{
		case 1:
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "Masukkan Lebar = ";
			cin >> lebar;
			cout << "Luas lingkaran = " << LuasLingkaran(panjang, lebar);
			break;
		case 2:
			cout << "Masukkan Jari - Jari = ";
			cin >> jejari;
			cout << "Luas keliling Lingkaran = " << LuasLingkaran(jejari);
			break;
		case 3:
			break;
		}
	} while (pilihan != 3);
}
