// TupleOf3_Aleksandar_Karatov_72045.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

template<typename T>
struct TupleOf3
{
    T x;
    T y;
    T z;

    TupleOf3(T X, T Y, T Z)
    {
        x = X;
        y = Y;
        z = Z;
    }
};
template<typename T>
TupleOf3<T>* vector_multiplication(const TupleOf3<T> v1,const TupleOf3<T> v2)
{
    TupleOf3<T> vector_mult =
        TupleOf3<T>(v1.y * v2.z - v1.z * v2.y,
                    v1.z * v2.x - v1.x * v2.z,
                    v1.x * v2.y - v1.y * v2.x);
    return &vector_mult;
}

int main()
{
    TupleOf3<int> a = TupleOf3<int>(5, 4, 7);
    TupleOf3<int> b = TupleOf3<int>(8, 5, 9);
    TupleOf3<int>* mult = vector_multiplication(a,b);
    std::cout << "[" << mult->x << ", " << mult->y << ", " << mult->z << "]" << std::endl;

    a = TupleOf3<int>(-4, -5, -6);
    b = TupleOf3<int>(1, 2, 3);
    mult = vector_multiplication(a, b);
    std::cout <<"[" <<mult->x << ", " << mult->y << ", " << mult->z << "]"<< std::endl;

    a = TupleOf3<int>(2, 4, 8);
    b = TupleOf3<int>(3, 6, 9);
    mult = vector_multiplication(a, b);
    std::cout << "[" << mult->x << ", " << mult->y << ", " << mult->z << "]" << std::endl;
}
