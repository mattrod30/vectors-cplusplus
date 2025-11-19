#include<iostream>
#include<vector>
using namespace std;

struct point {
	int x, y;

	point(int argX = 0, int argY = 0);

	double slope(point other);
	void printLine(point other);
};

int main(void) {
	point p1(2, 3);
	point p2(4, 9);

	vector<point> points = {
	p1, p2
	};

	double slope = points[0].slope(points[1]);
	cout << "Slope: " << slope << endl;

	points.printLine();
}



point::point(int argX, int argY) {
	x = argX;
	y = argY;
}

double point::slope(point other) {
	return (double)(other.y - y) / (other.x - x);
}
void point::printLine(point other) {
	double m = slope(other);
	double b = y - m * x;
	cout << "Line 1: " << y << "= " << m << "(" << x << ") +" << b << endl;
}
