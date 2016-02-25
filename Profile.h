#ifndef PROFILE_H
#define PROFILE_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

using namespace std;

struct Profile {

char name[20]; // should this be a pointer so we can use in B tree?
char age[3];
char occupation[30];

};


#endif