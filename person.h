#include "lib.h"

class Person {
private:
	char* _name;
	char* _s_name;
	int _age;
	
public:
	Person();
	Person(char* name);
	Person(char* name, char* s_name);
	Person(char* name, char* s_name, int age);

	Person(string name);
	Person(string name, string s_name);
	Person(string name, string s_name, int age);

	Person(Person& person);

	~Person();

	void person_info();

	//setters
	void set_name(char* name);
	void set_name(string name);
	void set_s_name(char* s_name);
	void set_s_name(string s_name);
	void set_age(int age);


};