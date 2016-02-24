#include <exception>
#include <string>
#include <cstdio>

#include "Profile.h"
using namespace std;

//figure out what default constructor needs to be
Profile::Profile(){
	name = "";
	age = 0;
	occupation = "";

}


Profile::Profile(string name, int age, string occupation){
	this->name = name;
	this->age = age;
	this->occupation = occupation;
}