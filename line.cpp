#include<iostream>
#include<vector>
using namespace std;

struct line {
private:
	int m, x, b;
public:
	line(int slope = 0, int xValue = 0, int yInt = 0) {
		m(slope);
		x = xValue;
		b = yInt;

	}
	double eval();

};

int main(void) {
	int length;

	



}

double line::eval() {
	return (m * x) + b;

}
