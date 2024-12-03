#include<iostream>
using namespace std;
class Clasa {
private:
	const int numar;
	int nrCopii;
	int* medie;
	bool premiant;
	static string nume;
public:
	Clasa() :numar(1) {
		this->nrCopii = 0;
		this->medie = nullptr;
		this->premiant = "false";
	}
	Clasa(int nrCopii,
	int* medie,
		bool premiant) :numar(20) {
		this->medie = medie;
		this->nrCopii = nrCopii;
		this->premiant = premiant;
	}
	~Clasa() {
		if (this->medie != NULL)
			delete[]this->medie;
	}
	Clasa(const Clasa& c) :numar(c.numar) {
		this->nrCopii = c.nrCopii;
		this->premiant = c.premiant;
		this->medie = new int[nrCopii];
		for (int i = 0; i < nrCopii; i++)
			this->medie[i] = c.medie[i];
	}
	const Clasa& operator=(const Clasa& e) {
		if (this != &e) {
			if (this->medie != NULL) {
				delete[]this->medie;
			}
			this->nrCopii = e.nrCopii;
			this->premiant = e.premiant;
			this->medie = new int[nrCopii];
			for (int i = 0; i < nrCopii; i++)
				this->medie[i] = e.medie[i];
		}
		return *this;
	}
	void setNrCopii(int nrCopii){
		this->nrCopii = nrCopii;
	}
	int getNrCopii() {
		return this->nrCopii;
	}
	operator int() {
		return this->nrCopii;
	}
	
};