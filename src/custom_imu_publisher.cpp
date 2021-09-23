#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <iostream>
#include <fstream>
#include <stringstream>

int main(){

    std::ifstream classFile("class.csv");
    std::string line;
    while(std::getline(stream, line)){
        std::istringstream s(line);
        std::string field;
        while (getline(s, field,',')){
            std::cout << field << ".\n";
        }
    }
    


}