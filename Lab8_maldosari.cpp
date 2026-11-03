/**
 * @file Lab8_maldosari.cpp
 * @author Musab Aldosari
 * @date 2026-11-02
 * @brief A program to demonstrate stack & heap memory using pointers and references.
 */

#include <iostream>
using namespace std;

/**
 * @brief Main function to show memory values and addresses.
 * @param None
 * @return 0 when the program finishes succesfully.
 */
int main() {

	//Step 1 Stack variables
	int stackInt = 10;

	//Step 2 Heap variable
	int* heapInt = new int;
	*heapInt = 20;

	//Step 3 Create pointer
	int* ptrToStack = &stackInt;

	//Step 4 Create reference
	int& refToStack = stackInt;

	//Step 5 Output stack
	cout << "Stack Variable (stackInt):" << endl;
	cout << "Value: " << stackInt << endl;
	cout << "Address: " << &stackInt << endl;

	//Step 6 Output heap
	cout << endl << "Heap Variable (heapInt):" << endl;
	cout << "Value: " << *heapInt << endl;
	cout << "Address: " << heapInt << endl;

	//Step 7 Output pointer
	cout << endl << "Pointer to Stack (ptrToStack):" << endl;
	cout << "Value Pointed To: " << *ptrToStack << endl;
	cout << "Address Stored: " << ptrToStack << endl;

	//Step 8 Output referece
	cout << endl << "Reference to Stack (refToStack): " << endl;
	cout << "Value Reffered: " << refToStack << endl;
	cout << "Address: " << &refToStack << endl;

	//Step 9 Remove heap memory
	delete heapInt;

	return 0;
}