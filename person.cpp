#include "person.h"

Person::Person(){
	_name = nullptr;
	_s_name = nullptr;
	_age = 0;
}

Person::Person(char* name) :Person::Person() {
	_name = new char[50];
	_name = name;

}

Person::Person(char* name, char* s_name) :Person::Person(name) {
	_s_name = new char[50];
	_s_name = name;

}
Person::Person(char* name, char* s_name, int age) :Person::Person(name, s_name) {
	_age = age;

}


Person::Person(string name) :Person::Person() {
	const int lenth = strlen(name.c_str());
	_name = new char[lenth];

	strcpy_s(_name, lenth, name.c_str());// 'strcpy': This function or variable may be unsafe.Consider using strcpy_s 

}

Person::Person(string name, string s_name) :Person::Person(name) {
	const int lenth = strlen(name.c_str());
	_s_name = new char[lenth];
	strcpy_s(_s_name, lenth, s_name.c_str());

}
Person::Person(string name, string s_name, int age) :Person::Person(name, s_name) {
	_age = age;

}

Person::Person(Person& person) {
	this->_name = person._name;
	this->_s_name = person._s_name;
	this->_age = person._age;
}

Person::~Person() {
	delete _name;
	delete _s_name;
}

void Person::person_info() {
	cout << "Name: "<<_name<<endl;
	cout << "Surname: " << _s_name << endl;
	cout << "Age: " << _age << endl;

}

//setters
void Person::set_name(char* name) {
	_name = name;
}

void Person::set_name(string name) {
	delete _name;
	int lenth = strlen(name.c_str());
	_name = new char[lenth];
	strcpy_s(_name, lenth, name.c_str());
}

void Person::set_s_name(char* s_name) {
	_s_name = s_name;
}

void Person::set_s_name(string s_name) {
	delete _s_name;
	int lenth = strlen(s_name.c_str());
	_s_name = new char[lenth];
	strcpy_s(_s_name, lenth, s_name.c_str());
}

void Person::set_age(int age) {
	_age = age;
}