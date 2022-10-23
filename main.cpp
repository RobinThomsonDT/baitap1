#include <iostream>
#include "Person.h"
#include "List.h"
using namespace std;
int main()
{
    List danhsach = new List()[100];
    int n = -1;
    while (n != 0)
    {
        if (n == -1)
        {
            cout << "List option:" << endl;
            cout << "1.Show List" << endl;
            cout << "2.Add object" << endl;
            cout << "3.Update object" << endl;
            cout << "4.Delete object" << endl;
            cout << "5.Search object" << endl;
            cout << "6.Sort object" << endl;
            cout << "0.Exit" << endl;
        }

        cout << "Enter option:";
        cin >> n;
        switch (n)
        {
        case 1:

            break;

        default:
            break;
        }
    }
}