#include <iostream>
#include "point.h"

Point::Point(){
    x = 0.;
    y = 0.;
}

Point::Point(double x_, double y_){
    x = x_;
    y = y_;
}

void Point::input(){
    std::cout << "Enter the coordinates (x, y): ";
    std::cin >> x >> y;
}

void Point::print(){
    std::cout << "(" << x << ", " << y  << ")" << std::endl;
}
    
bool Point::operator==(Point& B) {
    return (this->x == B.x && this->y == B.y);
}




