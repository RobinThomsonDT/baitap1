#include "Person.h"
using namespace std;
Person::void setInfo(string name, int age, string locate, bool sex)
{
    this->Ten = name;
    this->Tuoi = age;
    this->Diachi = locate;
    this->Gioitinh = sex;
}
Person::void output()
{
    cout << this->Ten << endl;
    cout << this->Tuoi << endl;
    cout << this->Diachi << endl;
    cout << this->Gioitinh << endl;
}
