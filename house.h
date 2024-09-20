#include "flat.h"

class House {
private:
	int _num_house;
	char* _adress;
	int _num_of_flats;
	Flat* _flats;
public:
	House();
	House(int num_house);
	House(int num_house, char* adress);
	House(int num_house, char* adress, int num_of_flats);
	House(int num_house, char* adress, int num_of_flats, Flat* _flats);

	House(int num_house, string adress);
	House(int num_house, string adress, int num_of_flats);
	House(int num_house, string adress, int num_of_flats, Flat* _flats);

	~House();

	void print_house();
};
