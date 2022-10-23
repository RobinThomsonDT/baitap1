#include "List.h"
#include "Person.h"

List::void update(int n)
{
    Person x;
    x.setInfo(string name, int age, string locate, bool sex);
    danhsach[n] = x;
}

List::void dele(Person *danhsach, int n, int size)
{
    delete danhsach[n];
    for (int i = n; i < size; i++)
    {
        danhsach[i] = danhsach[i + 1];
    }
    size--;
    delete danhsach[size];
}
List::void add(Person *danhsach, int n, int size)
{
    for (int i = size; i > n; i--)
    {
        danhsach[i] = danhsach[i - 1];
    }
    size++;
    danhsach[n].update();
}

List::void showlist(Person *danhsach, int n)
{
    for (int i = 0; i <= n; i++)
    {
        danhsach[i].output();
    }
}
List::void search(string name)
{
}

List::void sort()
{
}
