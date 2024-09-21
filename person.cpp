#include "person.h"

Person::Person() {
    _name = nullptr;
    _s_name = nullptr;
    _age = 0;
}

Person::Person(char* name) : Person::Person() {
    _name = new char[50];
    _name = name;
}

Person::Person(char* name, char* s_name) : Person::Person(name) {
    _s_name = new char[50];
    _s_name = s_name;
}

Person::Person(char* name, char* s_name, int age) : Person::Person(name, s_name) {
    _age = age;
}

Person::Person(string name) : Person::Person() {
    const int length = name.length() + 1;
    delete[] _name;
    _name = new char[length];
    strcpy_s(_name, length, name.c_str());
}

Person::Person(string name, string s_name) : Person::Person() {
    const int length = name.length() + 1;
    delete[] _name;
    _name = new char[length];
    strcpy_s(_name, length, name.c_str());

    const int s_name_length = s_name.length() + 1;
    delete[] _s_name;
    _s_name = new char[s_name_length];
    strcpy_s(_s_name, s_name_length, s_name.c_str());
}

Person::Person(string name, string s_name, int age) : Person::Person(name, s_name) {
    _age = age;
}

//copy constructor
Person::Person(Person& person) {
    const int name_length = strlen(person._name) + 1;
    _name = new char[name_length];
    strcpy_s(_name, name_length, person._name);

    const int s_name_length = strlen(person._s_name) + 1;
    _s_name = new char[s_name_length];
    strcpy_s(_s_name, s_name_length, person._s_name);

    _age = person._age;
}

//destructor
Person::~Person() {
    delete[] _name;
    delete[] _s_name;
}

void Person::person_info() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (_name != nullptr && _s_name != nullptr) {
        SetConsoleTextAttribute(hConsole, 10);
        cout << "Name: " << _name << endl;
        cout << "Surname: " << _s_name << endl;
        cout << "Age: " << _age << endl;
    }
    else {
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Person information is not available." << endl;
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
}

//setters
void Person::set_name(char* name) {
    _name = name;
}

void Person::set_name(string name) {
    delete[] _name;
    const int length = name.length() + 1;
    _name = new char[length];
    strcpy_s(_name, length, name.c_str());
}

void Person::set_s_name(char* s_name) {
    _s_name = s_name;
}

void Person::set_s_name(string s_name) {
    delete[] _s_name;
    const int length = s_name.length() + 1;
    _s_name = new char[length];
    strcpy_s(_s_name, length, s_name.c_str());
}

void Person::set_age(int age) {
    _age = age;
}