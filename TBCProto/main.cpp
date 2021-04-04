#include <iostream>

#include "FileIO.h"
#include "Entity.h"

int main() {
	using namespace std;
	std::stringstream ss;
	Entity entity;
	ss << entity;
	WriteToFile("testing.txt", ss);
}