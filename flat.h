#include "person.h"

class Flat {
private:
	int _num_person_in_flat;
	Person* _persons;
	int _num_flat;
	int _num_floor;
public:
	Flat();
	Flat(int num_person);
	Flat(int num_person, Person* persons);
	Flat(int num_person, Person* persons, int num_flat);
	Flat(int num_person, Person* persons, int num_flat, int num_floor);

	~Flat();

	void print_flat();

	//setters
	void set_num_person_in_flat(int num_person);
	void set_persons(Person* persons);
	void set_num_flat(int num_flat);
	void set_num_floor(int num_floor);

};