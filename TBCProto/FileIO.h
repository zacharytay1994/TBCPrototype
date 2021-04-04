#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

static std::string folder{ "../TxtFiles/" };

void WriteToFile(const std::string& path, std::stringstream& contents) {
	std::ofstream file(folder + path);
	if (file.is_open()) {
		file << contents.rdbuf();
		file.close();
	}
	else {
		std::cout << "EXCEPTION!!! FileIO > WriteToFile > Can't open file!" << std::endl;
	}
}

void ReadFromFile(const std::string& path, std::stringstream& contents) {
	std::ifstream file(folder + path);
	if (file.is_open()) {
		contents << file.rdbuf();
		file.close();
	}
	else {
		std::cout << "EXCEPTION!!! FileIO > ReadFromFile > Can't open file!" << std::endl;
	}
}