// employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Employee {
private:
    char* name;
    int age;

    void copy(const Employee&);
    void destroy();

public:
    Employee();
    Employee(char* _name, int age);
    Employee(const Employee& other);
    Employee& operator=(const Employee& other);
    bool operator==(const Employee& other) const;
    ~Employee();
};

Employee::bool operator==(const Employee& other) const {
    return strcmp(this->name, other.name) && (this->age == other.age);
}


Employee::Employee()
{
    name = "";
    age = 0;
}

Employee::Employee(const Employee& other)
{

    this->name = new char[strlen(other.name) + 1];
    strcpy_s(this->name, other.name);
    this->age = other.age;
}

Employee::~Employee()
{
    delete[] name;
    age = 0;
}

Employee::Employee& operator=(const Employee& other)
{
    if (this != &other) {
        delete[] name;
        this->name = new char[strlen(other.name) + 1];
        strcpy_s(this->name, other.name);
        this->age = other.age;
    }

    return *this;
}

Employee::Employee(char* _name, int _age)
{
    this->name = new char[strlen(_name) + 1];
    strcpy_s(this->name, _name);
    this->age = _age;
}


int main()
{
    Employee junior;
    Employee cloning(junior);
    Employee equalCloning = cloning;
    Employee gosho("Georgi", 19);

    Employee traicho;
    Employee Dimitar;

    if (traicho == Dimitar) {

    }

    return 0;
}