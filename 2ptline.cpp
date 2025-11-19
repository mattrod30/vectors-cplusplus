
#include<iostream>
#include<vector>
using namespace std;

struct point {
	int x, y;

	point(int argX = 0, int argY = 0);

	double slope(point line2);
};

int main(void) {
	point p1(1, 3);
	point p2(2, 4);

	vector<point> points = {
	p1, p2
	};

	p1.slope(p2);
}



point::point(int argX, int argY) {
	x = argX;
	y = argY;
}

double slope(point line2) {
	return (double)
}
