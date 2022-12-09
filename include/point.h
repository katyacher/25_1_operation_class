#pragma once

class Point{
private:
    double x;
    double y;
public:
    Point();
    Point(double x_, double y_);

    void input();
    void print();
    bool operator==(Point& B);
};
