#include "Train.h"

void linkedList::printList()
{
	trainCar * temp = head;

	while (temp->next != nullptr) {
		cout << temp->name << endl;
		temp = temp->next;
	}
	cout << temp->name << endl;

	temp = nullptr;

}

void linkedList::addItem(string xname)
{

	trainCar * cur = head;

	while (cur->next != nullptr)
		cur = cur->next;

	cur->next = new trainCar(xname);
	cur = nullptr;


}

linkedList::linkedList(string xname)
{
	head = new trainCar(xname);
	
}

void linkedList::remove(string target)
{

	trainCar * cur = head;

	while (cur->next != nullptr && cur->next->name != target)
		cur = cur->next;

	if (cur->next != nullptr) {

		trainCar * tmp = cur->next;
		cur->next = cur->next->next;
		delete tmp;
		tmp = nullptr;


	}
	else {
		cout << "Train car could not be found" << endl;
	}

	cur = nullptr;

}