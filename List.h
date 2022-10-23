#pragma once
#include <iostream>
#include "Person.h"
class List

{
private:
    Person danhsach = new Person()[100];

public:
    void add(Person danhsach, int n);
    void dele(Person danhsach, int n);
    void showlist();
    void set(Person x);
    void update(Person x);
    void search(string name);
    void sort();
}
