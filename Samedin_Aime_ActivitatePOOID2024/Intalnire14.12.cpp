#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Ochelari {
private:
	char* brand;
	float pret;
public:
	Ochelari():pret(0),brand(nullptr) {
	}
	Ochelari(float pret, const char* brand) {
		this->pret = pret;
		this->brand = new char[strlen(brand) + 1];
		strcpy_s(this->brand, strlen(brand) + 1, brand);
	}
	~Ochelari() {
		delete[]this->brand;
	}
	friend void operator<<(fstream &out, Ochelari ochelari) {
		out << ochelari.pret << endl;
		out << ochelari.brand << endl;
	}
	friend void operator>>(ifstream& in, Ochelari& och) {
		in >> och.pret;
		if (och.brand != NULL) {
			delete[]och.brand;
			och.brand = nullptr;
		}
		char buffer[50];
		in >> buffer;
		och.brand = new char[strlen(buffer) + 1];
		strcpy(och.brand, buffer);
	}
	friend void operator<<(ostream& out, Ochelari ochelari) {
		out << "PRET:" << ochelari.pret << endl;
		out << "BRAND:" << ochelari.brand << endl;
	}
};

int main() {

	Ochelari ochelari(1000, "Rayban");
	fstream fileStream("Ochelari.txt", ios::out);
	fileStream << ochelari;
	fileStream.close();
	ifstream fileIN("Cumaparaturi.txt", ios::in);
	fileIN >> ochelari;
	fileIN.close();

	return 0;
}