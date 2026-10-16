#include <iostream>			// include header file iostream that contains declarations of	
							// standart Library elements for input/output.
using namespace std;	    // statement that allows to use names defined under std
							// namespace in iostream header file. Name like cin n cout
							// become available without having to put a prefix std::
							// before them
int main() {		// program main function that program execution starts with 
					// beginning of the block
	int a;			// declaration for variable "a" of type int
	int res;		// declaration for variable "res" of type int

	cout << "Enter number: ";		//text "Enter number: " output
	cin >> a;		// waiting for user to enter integer number. Number then is
					// stored in variable "a"
	res = a * a;    // calculate square of variable a value. Result is then stored in	
					// variable "res"
	cout << endl << "Square of " << a << " is " << res << endl; // output the result

	return 0;		// main function returns 0 and this is interpreted as successful
					// program termination
					// end of the block

}