#include<iostream>
using namespace std;
class Casa {
private:
	const int numar;
	int* nrLocuitori;
	string strada;
	bool areEtaj;
	static string cartier;
public:
	//constructor fara parametrii
	Casa() :numar(28) {
		this->areEtaj = true;
		this->nrLocuitori = nullptr;
		this->strada = "NoName";
	}

	//constructor cu parametrii
	Casa(int numar,
		int* nrLocuitori,
		string strada,
		bool areEtaj) :numar(numar) {
		this->areEtaj = areEtaj;
		this->nrLocuitori = nrLocuitori;
		this->strada = strada;
		
	}
	//constructor de copiere
	Casa(const Casa& c):numar(c.numar) {
		this->areEtaj = c.areEtaj;
		this->cartier = c.cartier;
		this->strada = c.strada;
		
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
			if (this->nrLocuitori != NULL)
				delete[]this->nrLocuitori;
			this->areEtaj = e.areEtaj;
			this->cartier = e.cartier;
			this->strada = e.strada;
		
		}

	}

};