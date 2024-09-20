#include "flat.h"

Flat::Flat() {
	_num_person_in_flat = 0;
	_persons = nullptr;
	_num_flat = 1;
	_num_floor = 1;
}

Flat::Flat(int num_person): Flat::Flat() {
	_num_person_in_flat = num_person;
	_persons = new Person[_num_person_in_flat];
}

Flat::Flat(int num_person, Person* persons) : Flat::Flat(num_person) {
	_persons = persons;
}
Flat::Flat(int num_person, Person* persons, int num_flat) : Flat::Flat(num_person, persons) {
	_num_flat = num_flat;
}
Flat::Flat(int num_person, Person* persons, int num_flat, int num_floor) : Flat::Flat(num_person, persons, num_flat) {
	_num_floor = num_floor;
}

Flat::~Flat() {
	delete[] _persons;
}

void Flat::print_flat() {
	cout << "Flat # " << _num_flat << endl;
	cout << "Floor # " << _num_floor << endl;
	if (_persons != nullptr) {
		for (size_t i = 0; i < _num_person_in_flat; i++)
		{
			cout << "Person # " << i + 1 << " :" << endl;
			_persons[i].person_info();
		}
	}
	else {
		cout << "Flat is empty(0 persons)";
	}
	cout << endl;
}

//setters
void Flat::set_num_person_in_flat(int num_person) {
	_num_person_in_flat = num_person;
}

void Flat::set_persons(Person* persons) {
	_persons = persons;
}

void Flat::set_num_flat(int num_flat) {
	_num_flat = num_flat;
}

void Flat::set_num_floor(int num_floor) {
	_num_floor = num_floor;
}