#include <stdio.h>
#include <stdbool.h>

struct person {

	char name[40];
	int age;
	float height;
	float weight;

};

union tree {

	char kind[30];
	int age;
	float diameter;
	bool commercial;

};


int main() {

	struct person p1 = {
		"John", 30, 1.78, 80
	};

	union tree t1 = {
		"Birch", 80, 0.50, false
	};

	t1.diameter = 0.60;



	printf("Name: %s\nKörpergröße: %.2f\n", p1.name, p1.height);
	printf("Name: %s\nDiameter: %.2f\n", t1.kind, t1.diameter);

return 0;

}






