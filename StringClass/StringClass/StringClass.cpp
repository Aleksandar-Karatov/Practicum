// StringClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
int main()
{
    //testing input
    String test1 = "alabala";
    std::cout << test1 << std::endl;
    String test2 = String("balabalanica");
    std::cout << test2 << std::endl;
    String test3 = String(test2);
    std::cout << test3 << std::endl;
    String test4;
    test4.set_str("test4");
    std::cout << test4 << std::endl;
    std::cout << test4.get_str() << std::endl;

    //testing isEmpty()
    String test5;
    if (test5.isEmpty())
    {
        std::cout << "Test5 is empty";
    }
    else
    {
        std::cout << "Test5 is not empty";
    }
    std::cout << "\n";

    if (test4.isEmpty())
    {
        std::cout << "Test4 is empty";
    }
    else
    {
        std::cout << "Test4 is not empty";
    }
    std::cout << "\n";

    //testing operator <
    if (test1<test2)
    {
        std::cout << "test1 is < than test2";
    }
    else
    {
        std::cout << "test1 is not < than test2";
    }
    std::cout << "\n";
    if (test1>test2)
    {
        std::cout << "test1 is > than test2";
    }
    else
    {
        std::cout << "test1 is not > than test2";
    }

    std::cout << "\n";

    if (test2 < test1)
    {
        std::cout << "test2 is < than test1";
    }
    else
    {
        std::cout << "test2 is not < than test1";
    }
    std::cout << "\n";

    //testing operator >
    if (test2 > test1)
    {
        std::cout << "test2 is > than test1";
    }
    else
    {
        std::cout << "test2 is not > than test1";
    }
    std::cout << "\n";
    std::cout << "Enter a new str:";

    //testing console input
    String test6;
    std::cin >> test6;
    std::cout << test6 << std::endl;

    //testing operator =
    test5 = test6;

    //testing operator ==
    if (test5==test6)
    {
        std::cout << "Test5==Test6 \n";
    }
    else
    {
        std::cout << "Test5!=Test6 \n";
    }

    //testing operator !=
    if (test6 != test1)
    {
        std::cout << "Test6!=Test1 \n";
    }
    else
    {
        std::cout << "Test6==Test1 \n";
    }

    //testing operator +
    std::cout << test6 + test1 << std::endl;

    //testing operator [] and error detection
    std::cout << test4[4] << std::endl;
    std::cout << test4[6] << std::endl;
}

