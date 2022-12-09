#include <iostream>
#include "operation.h"

void scalpel(Point& p_begin, Point& p_end){
    std::cout << "An incision was made in the area from  ";
    p_begin.print();
    std::cout << " to ";
    p_end.print();
}

void hemostat(Point &clamping_point){
    std::cout << "Clamped at point ";
    clamping_point.print();
}

void tweezers(Point &pinch_point){
    std::cout << "Fixed at a point ";
    pinch_point.print();
}

void suture(Point &p_begin, Point &p_end){
    std::cout << "Seam completed in area from";
    p_begin.print();
    std::cout << " to ";
    p_end.print();
}