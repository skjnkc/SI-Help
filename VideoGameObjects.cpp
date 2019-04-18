#include "VideoGameObjects.h"

ostream & operator<<(ostream & out, Object & objectInfo)
{
	out << "x:" << objectInfo.x << endl << "y: " << objectInfo.y << endl;
	return out;
}

ostream & operator<<(ostream & out, Car & vehicleInfo)
{
	out << "Model ID: " << vehicleInfo.getModel();
	return out;
}

Object::~Object()
{
	destroyed = true;
	inventory.clear();
}

void Car::move()
{

	x += 1;

}

void Helicopter::move()
{

	y += 1;

}
