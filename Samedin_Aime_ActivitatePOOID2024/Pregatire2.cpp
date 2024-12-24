//#include<iostream>
//using namespace std;
//
//class Autobuz {
//private:
//	static int nrAutobuze;
//	const int idAutobuz;
//	int capacitate;
//	int nrPersoaneImbarcate;
//	char* producator;
//public:
//	Autobuz() :idAutobuz(5) {
//		this->nrAutobuze = 0;
//		this->capacitate = 40;
//		this->nrPersoaneImbarcate = 2;
//		this->producator = nullptr;
//	}
//	Autobuz(int capacitate,
//		int nrPersoaneImbarcate,
//		char* producator) :idAutobuz(10) {
//		this->capacitate = capacitate;
//		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
//		this->producator = new char[strlen(producator) + 1];
//		strcpy_s(this->producator, strlen(producator) + 1, producator);
//	}
//	~Autobuz() {
//		if (this->producator != NULL)
//			delete[]this->producator;
//	}
//	 Autobuz(const Autobuz& x) :idAutobuz(x.idAutobuz) {
//		 this->capacitate = x.capacitate;
//		 this->nrPersoaneImbarcate = x.nrPersoaneImbarcate;
//		 if (this->producator != NULL)
//			 delete[]this->producator;
//		 this->producator = new char[strlen(x.producator) + 1];
//		 strcpy_s(this->producator, strlen(x.producator) + 1, x.producator);
//	}
//	 void setCapacitate(int capacitate) {
//		 this->capacitate = capacitate;
//	 }
//	 void setNrPersoaneImbarcate(int nrPersoaneImbarcate) {
//		 this->nrPersoaneImbarcate = nrPersoaneImbarcate;
//	 }
//	 int getCapacitate() {
//		 return this->capacitate;
//	 }
//	 int getNrPersoaneImbarcate() {
//		 return this->nrPersoaneImbarcate;
//	 }
//	 const Autobuz operator=(const Autobuz& y) {
//		 if (this!= &y) {
//			 if (this->producator != NULL)
//				 delete[]this->producator;
//		 }
//
//			 this->capacitate = y.capacitate;
//			 this->nrPersoaneImbarcate = y.nrPersoaneImbarcate;
//			 this->producator = new char[strlen(y.producator) + 1];
//			 strcpy_s(this->producator, strlen(y.producator) + 1, y.producator);
//		 
//		 return *this;
//	 }
//	 int getNumarLocuriLibere() {
//		 return capacitate - nrPersoaneImbarcate;
//	 }
//
//};
//int Autobuz::nrAutobuze = 0;
//int main() {
//	Autobuz a1;
//	Autobuz a2(40, 30, (char*)"VOLVO");
//	cout << "Capacitate: " << a2.getCapacitate() << endl;
//	cout << "Numar persoane imbarcate: " << a2.getNrPersoaneImbarcate() << endl;
//	Autobuz a3 = a2;
//	a1 = a2;
//	cout << "Numar de locuri libere: " << a2.getNumarLocuriLibere() << endl;
//	
//	return 0;
//}