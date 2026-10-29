//	P10-1.cpp	-	Dylan King	-	10/29/2026
//
//	Description:	Initializes an array with ten four-digit random integers and then prints five lines of output containing:
//					- every element in order of appearence
//					- every element at an even index
//					- every even element
//					- all elements in reverse order
//					- and only the first and last element.


#include <iostream>
using namespace std;


int main() {
	
	int values[10];

	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		values[i] = rand() % 9000 + 1000;
		cout << values[i] << " ";
	}

	cout << endl << "Even indices:        ";
	for (int i = 0; i < 10; i++) {
		cout << values[i] << " ";
		i++;
	}
}