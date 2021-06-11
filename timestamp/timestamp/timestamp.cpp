// timestamp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Timestamp.h"
#include "TimestampWithDescription.h"
int main()
{
    Timestamp t1(20);
    std::cout << t1;
    Timestamp t2(30);
    std::cout << t2;
    Timestamp t3(t1);
    std::cout << t3;
    Timestamp t4(29);
    std::cout << t4;
    t4 = t2;
    std::cout << t4;
    Timestamp t6;
    t6 = t1 + 20;
    std::cout << t6;
    std::cout << t6 + 39;
    t6 += 18;
    std::cout << t6;

    Timestamp t7;
    std::cin >> t7;
    std::cout << t7;

    TimestampWithDescription tD1(25,"Desc1");
    std::cout << tD1;
    TimestampWithDescription tD2(35, "Desc2");
    std::cout << tD2;
    TimestampWithDescription tD3(tD1);
    std::cout << tD3;
    TimestampWithDescription tD4;
    tD4 = tD2;
    std::cout << tD4;

    TimestampWithDescription tD7;
    std::cin >> tD7;
    std::cout << tD7;


    

}

