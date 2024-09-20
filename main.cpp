#include "house.h"

int main()
{
	Person p1("John", "Doe", 25);
	Person p2 = p1;
	p2.set_name("Jane");

	Person* persons[] = {&p1, &p2};
	
	Flat f1(2, *persons, 1, 1);

	/*Person p3("Alex", "Hanks", 27);
	Person p4 = p3;
	p4.set_name("Ann");
	p4.set_age(30);
	Person p5 = p4;
	p5.set_name("Tom");
	p5.set_age(10);

	Person* persons2[] = { &p3, &p4, &p5 };

	Flat f2(3, *persons2, 2, 1);

	Person p6("Bob", "Gold", 25);
	Person p7 = p6;
	p6.set_name("Alice");
	Person* persons3[] = { &p6, &p7 };

	Flat f3(2, *persons3, 1, 2);*/

	/*House house(1, "Lenina 1", 3, new Flat[3]{ f1, f2, f3 });*/


	House house(1, "Lenina 1", 3, new Flat[1]{ f1 });
	house.print_house();

	/*p4.set_s_name("Smith");*/

	house.print_house();
	system("pause");
	return 0;
}