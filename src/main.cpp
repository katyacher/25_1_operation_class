#include <iostream>
#include "operation.h"
#include "point.h"


int main() {
    std::cout << "25.1 Operations Simulator" << std::endl;

    std::cout << "Operation begin." << std::endl;
    std::cout << "Start command: scalpel" << std::endl;

    Point p_begin, p_end;
    p_begin.input();
    p_end.input();

    scalpel(p_begin, p_end);

    while(true){
        std::cout << "Enter the next command: ";
        std::string command;
        std::cin >> command;

        if(command == "hemostat"){
            Point clamping_point;
            clamping_point.input();
            hemostat(clamping_point);
        } else if(command == "tweezers"){
            Point pinch_point;
            pinch_point.input();
            tweezers(pinch_point);
        } else if(command == "suture"){
            Point sp_begin, sp_end;
            sp_begin.input();
            sp_end.input();
            if(p_begin == sp_begin && p_end == sp_end) {
                suture(sp_begin, sp_end);
                break;
            } else {
                std::cout << "There is no insection in this segment." << std::endl;
            }
        }
    }

    std::cout << "Operation finished!" << std::endl;
    return 0;
}