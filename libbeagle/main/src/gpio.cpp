#include <fstream>
#include <iostream>
#include <dirent.h>
#include <stdlib.h>
#include <gpio.h>

GPIO::GPIO() {
}

GPIO::GPIO(unsigned number) {
	this->number = number;

	char buffer[1024];
	sprintf(buffer, "/sys/class/gpio/gpio%d", number);
	path = buffer;

	DIR *dir = opendir(path.c_str());
	if (dir != NULL) {
		existed = true;
		closedir(dir);
	}
	else {
		existed = false;
		ofstream out;
		out.open("/sys/class/gpio/export");
		out << number;
		out.close();
	}
}

GPIO::~GPIO() {
	if (!existed) {
		DIR *dir = opendir(path.c_str());
		if (dir != NULL) {
			existed = false;
			ofstream out;
			out.open("/sys/class/gpio/unexport");
			out << number;
			out.close();
		}
	}
}

void GPIO::direction(string direction) {
	ofstream out;
	out.open((path + "/direction").c_str());
	out << direction;
	out.close();
}

void GPIO::value(string value) {
	ofstream out;
	out.open((path + "/value").c_str());
	out << value;
	out.close();
}

void GPIO::value(unsigned value) {
	ofstream out;
	out.open((path + "/value").c_str());
	out << value;
	out.close();
}

string *GPIO::value(string *value) {
	ifstream in;
	in.open((path + "/value").c_str());
	in >> *value;
	in.close();
	return value;
}

unsigned GPIO::value() {
	string value;

	ifstream in;
	in.open((path + "/value").c_str());
	in >> value;
	in.close();
	return atoi(value.c_str());
}

void GPIO::dump() {
	cout << "number: " << number << endl;
	cout << "path: " << path << endl;
}