#pragma once 
//#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

class String {

private:
    char* str;

private:
    void copy(const String&);
    void destroy();

public:
    String();
    String(const char*);
    String(const String&);
    ~String();
    void set_str(const char*);
    const char* get_str() const;
    const bool isEmpty() const;
    int get_len() const;
    String& operator=(const String&);
    String operator+(const String&) const;
    bool operator==(const String&) const;
    bool operator!=(const String&) const;
    bool operator>(const String&) const;
    bool operator<(const String&) const;
    char& operator[](const int i) const;
    friend std::ostream& operator<<(std::ostream&, const String&);
    friend std::istream& operator>>(std::istream&, String&);
};