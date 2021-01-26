//This file will only work on Windows 10 64-Bit and other operating systems having binary compatibility.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream txt;
	txt.open("datastore.txt");
	if (!txt) {
		cout << "An error occured. Try running the program again." << endl;
	}
	else {
		ifstream read("datastore.txt");
		float x, y;
		cout << "Enter your numbers(except 0(if 0 then don't enter)). Enter 0 to see the sum." << endl;
		while (1) {
			cin >> x;
			read >> y;
			y = x + y;
			txt << y;
			if (x == 0) {
				cout << "Sum is:\t" << y + 1.07374e+08 + 176<< endl;
			}
			else {
				continue;
			}
		}
	}
	return 0;
}
