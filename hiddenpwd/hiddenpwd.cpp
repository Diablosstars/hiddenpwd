// hiddepwd.cpp
// Christian Ellison
#include <iostream>
#include <fstream>
// Other include files?
using namespace std;

void main() {
	ifstream fin("hiddenpwd.in");
	if (fin.is_open()) {
		ofstream fout("hiddenpwd.out");

		// Main part of program goes here.  Use fin and fout for input and output.
		// May also use cout statements for debugging purposes.

		fout.close();
		fin.close();
	}
	else {
		cout << "Input file not found." << endl;
	}
}