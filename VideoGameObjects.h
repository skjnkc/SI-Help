#pragma once

#include<iostream>
#include<vector>

using namespace std;

class Object {

public:

	Object(int xcord, int ycord) { x = xcord; y = ycord; }
	friend ostream& operator<<(ostream& out, Object& objectInfo);
	~Object();

protected:

	int x;
	int y;
	int health = 100;
	bool destroyed = false;
	vector<int> inventory;
};

class Car : public Object {

public:

	Car(int xcord, int ycord, int modelID) : Object(xcord, ycord) { model = modelID; }
	friend ostream& operator<<(ostream& out, Car& vehicleInfo);
	const int getModel() { return model; }
	void move();

private:
	int model;

};

class Helicopter : public Object {

public:

	Helicopter(int xcord, int ycord, int modelID) : Object(xcord, ycord) { model = modelID; }
	void move();

private:
	int model;

};

