#include <iostream>  
#include <cmath>  
#include <math.h>  
using namespace std;
int main()
{
    double x; // вхідний аргумент  
    double R1; // вхідний параметр  
    double y; // результат обчислення виразу  
    double R2;
    cout << "R1 = "; cin >> R1;
    cout << "x = "; cin >> x;
    cout << "R2 = "; cin >> R2;

    // розгалуження в повній формі  
    if (x <= -2 * R1)
        y = -x - 2 * R1;
    else
        if (-2 * R1 <= x && x <= 0)
            y = sqrt(-(x * x) - 2 * x * R1);
        else
            if (0 < x && x <= 2 * R2)
                y = -sqrt(-(x * x) + 2 * x * R2);
            else
                if (x > 2 * R2 && x <= 6)
                    y = x - 2 * R2 / 2 * R2 - 6;
                else y = -1;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}