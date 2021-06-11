// CDs_Aleksandar_Karatov_72045.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CD.h"
int main()
{
    CD disk1;
    CD disk2("Sony", 5, true, 2.50 , CD::logicalCDType::AudioCD);
    disk2.printDisk();
    disk2 += 500;
    std::cout << std::endl;
    disk2.printDisk();
    disk2 += 2500;
    std::cout << std::endl;
    disk2.printDisk();
    disk2 += 2500;
    std::cout << std::endl;
    disk2.printDisk();


    disk2 -= 500;
    std::cout << std::endl;
    disk2.printDisk();
    disk2 -= 2500;
    std::cout << std::endl;
    disk2.printDisk();
    disk2 -= 2500;
    disk2 -= 2500;
    std::cout << std::endl;
    disk2.printDisk();
    std::cout << std::endl;
    CD disk3("PunjabiDisk", 5, false, 2.50, CD::AudioCD);
    disk3.printDisk();
    disk3 += 500;

}

