#include<iostream>
#include<vector>
using namespace std;

struct point {
	int x, y;

	point(int argX = 0, int argY = 0);

	double output(int slope);
};

int main(void) {
	int y1, y2, x1, x2;

	vector<point> points = {

		point(1,3), point(2,4)
	};


}



point::point(int argX, int argY) {
	x = argX; 
	y = argY;
}

double point::output(int slope) {
	y1 = 
}
