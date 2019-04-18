#include<iostream>
#include"Train.h"

using namespace std;

void recPrintList(trainCar * ptr) {
	if (ptr == nullptr)
		cout << "EMPTY TRAIN" << endl;
	else if (ptr->next == nullptr)
		cout << ptr->name << endl;
	else {
		cout << ptr->name << "-";
		recPrintList(ptr->next);
	}
}

void recReversePrintList(trainCar * ptr) {
	if (ptr == nullptr)
		cout << "EMPTY TRAIN" << endl;
	else if (ptr->next == nullptr)
		cout << ptr->name;
	else {
		recReversePrintList(ptr->next);
		cout <<"-" <<ptr->name;
	}
}

void main() {

	//Initialize
	linkedList myTrain("Engine");
	myTrain.addItem("Car 1");
	myTrain.addItem("Car 2");
	myTrain.addItem("Car 3");
	myTrain.addItem("Caboose");

	//Prints
	myTrain.printList();
	recPrintList(myTrain.getHead());
	recReversePrintList(myTrain.getHead());

	system("Pause");

}