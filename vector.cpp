#include <iostream>
#include <vector>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);


int main(void) {

	vector<string> userStrings;
	string input;
	srand(time(0));


	cout << "Enter 5 strings: \n";
	for (int i = 0; i < 5; i++) {
		cout << "string " << i + 1 << ": ";
		getline(cin, input);
		userStrings.push_back(input);
	}
	printStrings(userStrings);
	string pick = randomString(userStrings);
	cout << pick << endl;
}
void printStrings(vector<string> arg) {

	cout << "\nstrings: " << endl;
	for (string s : arg) {
		cout << s << " ";
	}
}

string randomString(vector<string> arg) {
	cout << "\n";
	cout << "\nRandomly generated string: ";
	int index = rand() % arg.size();
	return arg[index];

}

