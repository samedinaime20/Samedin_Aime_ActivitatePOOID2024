#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
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
		if (this->nationalitate != nullptr) {
			delete[]this->nationalitate;
		}
	}
	Croaziera(const Croaziera& c) :idVapor(c.idVapor) {
		this->viteza = c.viteza;
		this->capacitate = c.capacitate;
		this->allInclusive = c.allInclusive;
		if (c.nationalitate != nullptr) {
			this->nationalitate = new char[strlen(c.nationalitate) + 1];
			strcpy_s(this->nationalitate, strlen(c.nationalitate) + 1, c.nationalitate);
		}
		else {
			this->nationalitate = nullptr;
		}
	}
	const Croaziera& operator=(const Croaziera& e) {
		if (this != &e) {
			if (this->nationalitate != NULL)
				delete[]this->nationalitate;
			this->viteza = e.viteza;
			this->capacitate = e.capacitate;
			this->allInclusive = e.allInclusive;
			if (e.nationalitate != nullptr) {
				this->nationalitate = new char[strlen(e.nationalitate) + 1];
				strcpy_s(this->nationalitate, strlen(e.nationalitate) + 1, e.nationalitate);
			}
			else {
				this->nationalitate = nullptr;
			}
		}
		return *this;
	}
	float getViteza() {
		return this->viteza;
	}
	void setViteza(float viteza) {
		this->viteza = viteza;
	}

	int getCapacitate() {
		return this->capacitate;
	}
	void setCapacitate(int capacitate) {
		this->capacitate = capacitate;
	}
	Croaziera operator+(const Croaziera& p) {
		Croaziera aux;
		aux.viteza = this->viteza+p.viteza;
		aux.capacitate = this->capacitate+p.capacitate;
		aux.allInclusive = this->allInclusive || p.allInclusive;
		if (aux.nationalitate != NULL)
			delete[]aux.nationalitate;
		if (this->nationalitate != nullptr || p.nationalitate!=nullptr) {
			rsize_t length = strlen(this->nationalitate) + strlen(p.nationalitate) + 1;
			aux.nationalitate = new char[length];
			strcpy_s(aux.nationalitate, length, this->nationalitate);
			strcat_s(aux.nationalitate, length, p.nationalitate);
		}
		return aux;
	}



};

int main() {
	Croaziera a1;
	a1.setViteza(60);
	a1.setCapacitate(200);
	Croaziera a2 = a1;
	Croaziera a3;
	Croaziera a4;
	a3 = a1;
	a1.setViteza(100);
	a4=a3+ a1;
	cout << a1.getViteza() <<" "<<a1.getCapacitate()<< endl;
	cout<< a2.getViteza() <<" "<<a2.getCapacitate()<< endl;
	cout << a3.getViteza() <<" "<<a3.getCapacitate()<< endl;
	cout << a4.getViteza() <<" "<<a4.getCapacitate()<< endl;	
	return 0;
}
