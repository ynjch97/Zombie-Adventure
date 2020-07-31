#include <stdio.h>
#include "Person.h"

Person* Person::_instance = 0;

class Person;

Person::Person() {
	power = 100;
}

Person::~Person() {

}

Person* Person::GetInstance()
{
	if (0 == _instance)
	{
		_instance = new Person();
	}
	return _instance;
}

void Person::PersonAttack() {
	power = power - 10;
	printf(">> My power : %d \n", power);
	if (0 == power) {
		
	}
}

int Person::GetPower() {
	return power;
}
