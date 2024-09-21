#include "house.h"

House::House() {
	_num_house = 1;
	_adress = nullptr;
	_num_of_flats = 0;
	_flats = nullptr;
}
House::House(int num_house): House::House() {
	_num_house = num_house;
}
House::House(int num_house, char* adress) : House::House(num_house) {
	_adress = new char[50];
	_adress = adress;
}
House::House(int num_house, char* adress, int num_of_flats) : House::House(num_house, adress) {
	_num_of_flats = num_of_flats;
	_flats = new Flat[_num_of_flats];
	
}
House::House(int num_house, char* adress, int num_of_flats, Flat* flats) : House::House(num_house, adress, num_of_flats) {
	_flats = flats;
}

House::House(int num_house, string adress) : House::House(num_house) {
	_adress = new char[50];
	strcpy_s(_adress, 50, adress.c_str());
}

House::House(int num_house, string adress, int num_of_flats) : House::House(num_house, adress) {
	_num_of_flats = num_of_flats;
	_flats = new Flat[_num_of_flats];
}

House::House(int num_house, string adress, int num_of_flats, Flat* flats) : House::House(num_house, adress, num_of_flats) {
	_flats = flats;
}

House::~House() {
	delete[] _adress, _flats;
}

void House::print_house() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 11);

	cout << "House information: " << endl;
	cout << "Adress: " << _adress << ", " << _num_house << endl;
	cout << "Flats: " << endl;
	cout << endl;
	if (_flats != nullptr) {
		for (size_t i = 0; i < _num_of_flats; i++)
		{
			_flats[i].print_flat();
		}
	}
	else {
		SetConsoleTextAttribute(hConsole, 12);
		cout << "House is empty" << endl;
	}
	cout << endl;
}