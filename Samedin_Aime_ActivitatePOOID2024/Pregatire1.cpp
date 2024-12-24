//#include<iostream>
//using namespace std;
//
//enum tipPantof 
//{
//	Sneakers, Sandals, Slippers, Boots
//};
//
//string transformare(tipPantof mod) {
//	switch (mod)
//	{
//	case Sneakers:
//		return "Sneakers";
//	case Sandals: 
//		return "Sandals";
//	case Slippers:
//		return "Slippers";
//	case Boots:
//		return "Boots";
//	default:
//		return "Altceva";
//	}
//}
//
//class Pantofi {
//public:
//    int numar;
//	float pret;
//	bool cuToc;
//	string material;
//	tipPantof tipPantof;
//};
//
//void alegerePantofi(Pantofi pantof) {
//	cout << "Numar: " << pantof.numar << endl;
//	cout << "Pret :" << pantof.pret << endl;
//	cout << "Material: " << pantof.material << endl;
//	if (pantof.cuToc == true)
//		cout << "Cu toc: " << "DA" << endl;
//	else
//	{
//		cout << "Cu toc: " << "NU" << endl;
//	}
//	cout << "Tip pantofi: " << pantof.tipPantof;
//
//}
//
//void main() {
//	Pantofi pantofi1;
//	pantofi1.cuToc = true;
//	pantofi1.material = "Piele";
//	pantofi1.numar = 36;
//	pantofi1.pret = 200;
//	pantofi1.tipPantof = Boots;
//
//	alegerePantofi(pantofi1);
//
//
//}
