#include <iostream>
#include <limits.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
/*  size_t t;
    unsigned int i;
    typedef string mine_string;
    mine_string name = "lalala";
*/
    //print the maxium quantity of int
/*  cout << INT_MAX <<endl; */

/*  int salary = 250;
    cout << "Ming's salary is: " << salary <<endl;
*/
/*
    float num = 12345.12345678;
    cout << num <<endl;
*/
/*
    const float PI = 3.14;

    float radius = 4.5;
    float height = 90.0;
    double volume = 3.14 * pow(radius, 2) * height;
    cout << volume << endl;
*/

/*
    //control the accuracy of cout
    //1. force to display in decimals mode
    cout << fixed;
    //2. control the accuracy
    cout << setprecision(2);

    double doubleNum = 100.0 / 3.0;

    cout <<doubleNum * 1000000 << endl;
*/


    cout << fixed << setprecision(2);
    cout << setw(8) << "|" << 3.14 << "|" << endl;


    cout << fixed;
    float floatNum = 10.0 / 3.0;
    double doubleNum = 10.0 / 3.0;
    const float million = 1000000;

    cout << "floatNum" << floatNum << endl;
    cout << "100w * floatNum = " << million  * floatNum << endl;
    cout << "1000w * floatNum = " << 10 * million * floatNum << endl;

    cout << "\ndoubleNum = " << doubleNum << endl;
    cout << "100w * doubleNum = " << million * doubleNum;

    return 0;
}