#ifndef PROFILE_H
#define PROFILE_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

using namespace std;

class Profile {
//no private variables
public:
char[20] name; // should this be a pointer so we can use in B tree?
char[3] age;
char[30] occupation;
Profile(); // do we need default constructor?
Profile(string name, int age, string occupation);

};


#endif