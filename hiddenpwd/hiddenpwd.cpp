// hiddepwd.cpp
// Christian Ellison
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
// Other include files?
using namespace std;

void main() {
	ifstream fin("hiddenpwd.in");
	if (fin.is_open()) {
		ofstream fout("hiddenpwd.out");
		int testCases, current = 0;
		string password;
		string pMessage;

		fin >> testCases;
		for (int i = 0; i < testCases; i++)
		{
			fin >> password >> pMessage;
			for (int j = 0; j < pMessage.size(); j++)
			{
				if (password[current] == pMessage[j])
				{
					current++;
					password[current] = ' ';
				}
				else if (true);///////////////////////////////////////////////////////////

			}



			current = 0;
		}

		fout.close();
		fin.close();
	}
	else {
		cout << "Input file not found." << endl;
	}
}