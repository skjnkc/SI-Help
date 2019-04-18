#include<iostream>
#include<string>

using namespace std;


//Fill in the program below such that:
//	Declare a dynamic array that contains strings
//	Dynamic array starts at a capacity of 1
//	Dynamic array doubles in capacity each time it is met


void main() {
	
	//Function declarations
	void addName(string name, string *& people, int & capacity, int & size);


	//Dynamic Array data
	int capacity = 1;
	int size = 0;
	string * people;
	people = new string[capacity];

	//User Input
	int numPeople;
	cout << "How many names would you like to enter?" << endl;
	cin >> numPeople;

	//Populate Array
	string name;
	for (int i = 0; i < numPeople; i++) {
		cin >> name;
		addName(name, people, capacity, size);
	}

	//Find Waldo
	string waldo = "Waldo";
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (people[i] == waldo) {
			cout << "We found Waldo!" << endl;
			found = true;
			break;
		}

	}
	if (!found)
		cout << "We couldn't find Waldo!" << endl;

	system("pause");
		




}

void addName(string name, string *& people, int & capacity, int & size) {


	if (size >= capacity) {

		string * newArray;
		int newCapacity = capacity * 2;
		newArray = new string[newCapacity];

		for (int i = 0; i < capacity; i++)
		{
			newArray[i] = people[i];
		}

		delete[] people;
		people = newArray;

		capacity = newCapacity;
	}

	people[size] = name;
	size += 1;
	
}