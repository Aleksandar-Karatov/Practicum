// week1Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Point
{
private:
    int X;
    int Y;
public:
    void setX(int x)
    {
        X = x;
    }
    int getX()
    {
        return X;
    }
    void setY(int y)
    {
        Y = y;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

