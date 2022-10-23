#pragma once
#include <iostream>
#include <string.h>
class Person
{
private:
    string Ten;
    int Tuoi;
    string Diachi;
    bool Gioitinh;

public:
    Person(/* args */);
    ~Person();
    Void setInfo(string name, int age, string locate, bool sex);
    void output()
};
