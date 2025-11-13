#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for transform
using namespace std;

int searchVector(vector<string> vecArg, string target);
bool runAgain(void);
void printVector(const vector<string>& vec);

int main() {
    vector<string> userStrings = {
        "Alex", "Ben", "Chris", "Diana", "Ella",
        "Frank", "Grace", "Hank", "Ivy", "Leo"
    };

    printVector(userStrings);

    string input;
    do {
        cout << "\nEnter a string to search for: ";
        getline(cin, input);

        int result = searchVector(userStrings, input);
        if (result == -1) {
            cout << "\nYour string (" << input << ") is not located in this vector.\n";
        } else {
            cout << "\nYour string (" << input << ") is in the vector at index " << result << ".\n";
        }

    } while (runAgain());

    return 0;
}

int searchVector(vector<string> vecArg, string target) {
    // Make search case-insensitive
    transform(target.begin(), target.end(), target.begin(), ::tolower);

    for (int i = 0; i < (int)vecArg.size(); i++) {
        string temp = vecArg[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

        if (temp == target) {
            return i;
        }
    }
    return -1;
}

void printVector(const vector<string>& vec) {
    cout << "\nHere are the strings in your vector:\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < (int)vec.size(); i++) {
        cout << i << ": " << vec[i] << endl;
    }
    cout << "-----------------------------------\n";
}

bool runAgain(void) {
    char response;
    cout << "\nWould you like to search for a different string? (y or n): ";
    cin >> response;
    cin.ignore(); // discard leftover newline

    if (response == 'y' || response == 'Y') {
        return true;
    } else {
        return false;
    }
}
