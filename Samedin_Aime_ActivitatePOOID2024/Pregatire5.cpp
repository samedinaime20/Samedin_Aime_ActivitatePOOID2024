#include<iostream>
using namespace std;
class Croaziera {
private:
	const int idVapor;
	float viteza;
	int capacitate;
	char* nationalitate;
	bool allInclusive;
	static string nume;
public:
	Croaziera():idVapor(0) {
		this->viteza = 0;
		this->capacitate = 100;
		this->nationalitate = nullptr;
		this->allInclusive = false;
	}
	Croaziera(float viteza,
		int capacitate,
		char* nationalitate,
		bool allInclusive) :idVapor(26) {
		this->allInclusive = allInclusive;
		this->capacitate = capacitate;
		this->viteza = viteza;
		this->nationalitate = nationalitate;
	}
	~Croaziera() {
		if (this->nationalitate != NULL) {
			delete[]this->nationalitate;
		}
	}
	Croaziera(const Croaziera& c) :idVapor(c.idVapor) {
		this->viteza = c.viteza;
		this->capacitate = c.capacitate;
		this->allInclusive = c.allInclusive;
		this->nationalitate = new char[strlen(nationalitate) + 1];
		strcpy_s(c.nationalitate, strlen(nationalitate) + 1, this->nationalitate);
	}
	const Croaziera& operator=(const Croaziera& e) {
		if (this != &e) {
			if (this->nationalitate != NULL)
				delete[]this->nationalitate;
			this->viteza = e.viteza;
			this->capacitate = e.capacitate;
			this->allInclusive = e.allInclusive;
			this->nationalitate = new char(strlen(nationalitate) + 1);
			strcpy_s(e.nationalitate, strlen(nationalitate) + 1, this->nationalitate);
		}
		return *this;
	}
	float getViteza() {
		return this->viteza;
	}
	void setViteza(float viteza) {
		this->viteza = viteza;
	}
	Croaziera operator+(const Croaziera& p) {
		Croaziera aux;
		aux.viteza = this->viteza;
		aux.capacitate = this->capacitate;
		aux.allInclusive = this->allInclusive;
		if (aux.nationalitate != NULL)
			delete[]aux.nationalitate;
		strcpy_s(aux.nationalitate, strlen(nationalitate) + 1, this->nationalitate);
		return aux;
	}



};
int main() {
	Croaziera a1;
	Croaziera a2 = a1;
	Croaziera a3;
	a3 = a1;
	a3 + a1;
	a1.setViteza(60);
	cout << a1.getViteza() << endl;

	return 0;
}
