#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point(int argX = 0, int argY = 0);
};

struct Line {
    Point p1, p2;
    Line();
    Line(Point a, Point b);
    double slope();
    void printLine();
    double evaluate(double xValue);
};

int main() {
    Point p1(2, 3);
    Point p2(3, 10);

    Line myLine(p1, p2);

    cout << "Slope: " << myLine.slope() << endl;

    myLine.printLine();

    double x;
    cout << "Enter an x value to evaluate: ";
    cin >> x;

    double y = myLine.evaluate(x);
    cout << "At x = " << x << ", y = " << y << endl;

    return 0;
}

Point::Point(int argX, int argY) {
    x = argX;
    y = argY;
}

Line::Line() {
    p1 = Point(0, 0);
    p2 = Point(1, 1);
}

Line::Line(Point a, Point b) {
    p1 = a;
    p2 = b;
}

double Line::slope() {
    return double(p2.y - p1.y) / double(p2.x - p1.x);
}

void Line::printLine() {
    double m = slope();
    double b = p1.y - m * p1.x;
    cout << "y = " << m << "x + " << b << endl;
}

double Line::evaluate(double xValue) {
    double m = slope();
    double b = p1.y - m * p1.x;
    return m * xValue + b;
}
