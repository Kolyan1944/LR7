#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
    float start, end, step, Z;
    cout << "Imput start value\n";
    cin >> start;
    cout << "Imput end value\n";
    cin >> end;
    cout << "Imput step value\n";
    cin >> step;
    cout << "\t\t\t\t-=WHILE=-\n";
    cout << "Your coord:\n" << setw(5) << "Start: " << start << setw(10) << "End: " << end << setw(15) << "Step: " << step << endl << endl;

    while (start <= end - step/2)
    {
        Z = pow(start, 10) + 2 * (start, 4) - 10;
        cout << "Result: " << Z << "\n";
        start += step;

        break;
    }
    system("pause");
    return 0;
} 
