#include <iostream>
#include <string>
#include<vector>
#include<iomanip>
using namespace std;

struct Computer {
	string brand, processor;
	int ram, hd, stock;
	float cost;

	Computer(string argB = "Great Value", string argP = "I0", int argR = 4, int argHD = 100, int argQ = 0, float argCost = 0);

	void display(float argP);
	float retailPrice(float argMarkup);

};
void printInventory(vector<Computer>& arg, float markupPercent);

int main(void) {
	string brand, proc;
	int ram, HD, num;
	float c, userMarkup;
	char userResp;
	vector<Computer> v;

	do {
		cout << "Enter the brand: ";
		getline(cin, brand);
		cout << "Enter the processor: ";
		getline(cin, proc);
		cout << "Enter the ram: ";
		cin >> ram;
		cout << "Enter the hard drive size: ";
		cin >> HD;
		cout << "Enter the quantity in stock: ";
		cin >> num;
		cout << "Enter the wholesale cost: ";
		cin >> c;

		v.push_back(Computer(brand, proc, ram, HD, num, c));

		cout << "\nEnter another? (y or n): ";
		cin >> userResp;
		cin.ignore();

	} while (userResp == 'y' || userResp == 'Y');
	
	cout << "\nStore markup percentage (ex, 35 or 45): ";
	cin >> userMarkup;

	printInventory(v, userMarkup);

	return 0;
}
void printInventory(vector<Computer>& arg, float markupPercent) {
	
	for (int i = 0; i < arg.size(); i++) {
		arg[i].display(35);
		cout << "**** **** **** \n";
	}
}

Computer::Computer(string argB, string argP, int argR, int argHD, int argQ, float argCost) {
	brand = argB;
	processor = argP;
	ram = argR;
	hd = argHD;
	stock = argQ;
	cost = argCost;
}

void Computer::display(float argP) {
	cout << "Brand: " << brand << " with " << processor << endl;
	cout << "Ram: " << ram << " GB and storage: " << hd << " GB" << endl;
	cout << "Quantity: " << stock << endl;
	cout << fixed << setprecision(2);
	cout << "Retail Price: $" << retailPrice(argP) << endl;
}  
float Computer::retailPrice(float argMarkup) {
	float price = cost + cost * argMarkup / 100;
	return price;

}
