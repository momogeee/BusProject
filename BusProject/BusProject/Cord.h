#pragma once
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdio.h>
#include <time.h>
class Cord
{
private:
	float x;
	float y;
public:
	Cord() {
		x = 0;
		y = 0;
	}

	Cord(float x,float y) {
		this->x = x;
		this->y = y;
	}
	void set(Cord cord) {
		this->x = cord.x;
		this->y = cord.y;
	}
	void print() {
		std::cout << "(" << x << "," << y << ")";
	}
};