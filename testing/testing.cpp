#include <iostream>
#include <string>
#include <vector>


class men {
public: 
	std::string name;
	int age;
	int height;
	int weight;

};




int main() {
	men person1;
	person1.name = "John";
	person1.age = 25;
	person1.height = 180;
	person1.weight = 80;


	men person2;
	person2.name = "Mike";
	person2.age = 30;
	person2.height = 170;
	person2.weight = 70;



	// first
	std::cout << "(*)---> Name: " << person1.name << std::endl;
	std::cout << "(*)---> Age: " << person1.age << std::endl;
	std::cout << "(*)---> height: " << person1.height << std::endl;














}



