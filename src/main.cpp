#include <iostream>
#include "operation.h"
#include "point.h"


int main() {
    std::cout << "25.1 Operations Simulator" << std::endl;

    std::cout << "Operation begin." << std::endl;
    std::cout << "Start command: scalpel" << std::endl;

    Point p_begin, p_end;
    std::cout << "Enter the start point:" << std::endl;
    p_begin.input();
    std::cout << "Enter the finish point:" << std::endl;
    p_end.input();

    scalpel(p_begin, p_end);

    while(true){
        std::cout << "\nEnter the next command: ";
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
             std::cout << "Enter the start point:" << std::endl;
            sp_begin.input();
            std::cout << "Enter the finish point:" << std::endl;
            sp_end.input();
            if(p_begin == sp_begin && p_end == sp_end) {
                suture(sp_begin, sp_end);
                break;
            } else {
                std::cout << "There is no insection in this segment." << std::endl;
            }
        }
    }

    std::cout << "\nOperation finished!" << std::endl;
    return 0;
}