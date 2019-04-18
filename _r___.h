#pragma once
#include<string>
#include<iostream>

using namespace std;

struct trainCar {

	trainCar(string xname) { name = xname; next = nullptr; }
	trainCar() { name = ""; next = nullptr; }

	string name;
	trainCar * next;

};


class linkedList {

public:

	void printList();
	void addItem(string xname);
	linkedList(string xname);
	trainCar * getHead() { return head; }
	void remove(string target);



private:
	trainCar * head;
	

};