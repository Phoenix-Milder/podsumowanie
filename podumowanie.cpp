#include <iostream>
using namespace std;

class Pracownik {
private:
	int pesel;
public:
	int id;
	string imie;
	string nazwisko;
	string stanowisko;
	void ustawPersonalia(int mPesel, int mId, string mImie, string mNazwisko) {
		int pesel = mPesel;
		int id = mId;
		string imie = mImie;
		string nazwisko = mNazwisko;
	}
	/* ****************************************************

	** Autor: Amir Berezhnov

	** Metoda ustawStanowisko() - ustawia wartosc dla stannowiska z pomocą wskaznikow;

	************************************************** */
	void ustawStanowisko(string* mStanowisko) {
		string stanowisko = *mStanowisko;
		string* stan = &stanowisko;
	}
	void wyswietl_dane(string imie, string nazwisko, string* stanowisko, int id, int pesel) {
		cout << "Imie - " << imie << "\n Nazwisko " << nazwisko << "\n Stanowisko " << *stanowisko << "\n Id " << id << "\n Pesel " << pesel << endl;
	}
	void wyswietl_personalia(string imie, string nazwisko, int id, int pesel) {
		cout << "Imie - " << imie << "\n Nazwisko " << nazwisko << "\n Id " << id << "\n Pesel " << pesel << endl;
	}
	void wyswietl_stanowisko(string* stanowisko) {
		cout << "Stanowisko - " << *stanowisko;
	}

};

int main() {
	Pracownik pracownik;
	int pPesel = 2;
	int pId = 3;
	string pImie = "Jan";
	string pNazwisko = "Kowalski";
	string pStanowisko = "Pracownik";
	pracownik.ustawPersonalia(pPesel, pId, pImie, pNazwisko);
	pracownik.ustawStanowisko(&pStanowisko);
	pracownik.wyswietl_dane(pImie, pNazwisko, &pStanowisko, pId, pPesel);
	pracownik.wyswietl_personalia(pImie, pNazwisko, pId, pPesel);
	pracownik.wyswietl_stanowisko(&pStanowisko);
}
