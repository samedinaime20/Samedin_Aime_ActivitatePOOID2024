#include<iostream>
using namespace std;
class Casa {
private:
	const int numar;
	int nrLocuitori;
	int* varsteLocuitori;
	string strada;
	bool areEtaj;
	static string cartier;
public:
	//constructor fara parametrii
	Casa() :numar(28) {
		this->areEtaj = true;
		this->nrLocuitori = 0;
		this->strada = "NoName";
		this->varsteLocuitori = nullptr;
	}

	//constructor cu parametrii
	Casa(int numar,
		int nrLocuitori,int* varsteLocuitori,
		string strada,
		bool areEtaj) :numar(numar) {
		this->areEtaj = areEtaj;
		this->nrLocuitori = nrLocuitori;
		this->strada = strada;
		this->varsteLocuitori = varsteLocuitori;
		
	}
	//constructor de copiere
	Casa(const Casa& c):numar(c.numar) {
		this->areEtaj = c.areEtaj;
		this->cartier = c.cartier;
		this->strada = c.strada;
		this->nrLocuitori = c.nrLocuitori;
		this->varsteLocuitori = new int[nrLocuitori];
		for (int i = 0; i < nrLocuitori; i++)
			this->varsteLocuitori[i] = c.varsteLocuitori[i];
	}

	//getteri si setteri
	void setAreEtaj(bool areEtaj) {
		this->areEtaj = areEtaj;
	}

	bool setAreEtaj() {
		return this->areEtaj;
	}

	//operator=
	const Casa& operator=(const Casa& e) {
		if (this != &e) {
			if (this->varsteLocuitori != NULL)
				delete[]this->varsteLocuitori;
			this->areEtaj = e.areEtaj;
			this->cartier = e.cartier;
			this->strada = e.strada;
			this->nrLocuitori = e.nrLocuitori;
			this->varsteLocuitori = new int[nrLocuitori];
			for (int i = 0; i < nrLocuitori; i++)
				this->varsteLocuitori[i] = e.varsteLocuitori[i];
		}
		return *this;

	}

	//operator+
	Casa operator+(const Casa& p) {
		Casa aux;
		aux.strada = this->strada;
		aux.areEtaj = this->areEtaj;
		aux.nrLocuitori = this->nrLocuitori + p.nrLocuitori;
		if (aux.varsteLocuitori != NULL) {
			delete[]aux.varsteLocuitori;
		}
		aux.varsteLocuitori = new int[this->nrLocuitori + p.nrLocuitori];
		for (int i = 0; i < this->nrLocuitori; i++)
			aux.varsteLocuitori[i] = this->varsteLocuitori[i];
		for (int j = this->nrLocuitori; j < aux.nrLocuitori; j++)
			aux.varsteLocuitori[j] = this->varsteLocuitori[j];
		return aux;
	}

	//operator int
	operator int() {
		return this->nrLocuitori;
	}

	//explicit operator float
	explicit operator float() {
		if (this->nrLocuitori == NULL) {
			throw exception("Casa nu are locuitori!");
		}
		float varstaMedie=0;
		int varstaTotala=0;
		for (int i = 0; i < this->nrLocuitori; i++)
			varstaTotala = varstaTotala + this->varsteLocuitori[i];
		varstaMedie = varstaTotala / this->nrLocuitori;
		return varstaMedie;
	}
};
int main() {
	Casa casa1;
	Casa casa2 = casa1;
	Casa casa3;
	casa3 = casa1;
	return 0;
}