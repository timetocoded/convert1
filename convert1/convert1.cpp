#include <iostream>

using namespace std;

int main(int n)
{
    int a, b, c;
    char action;

    for (;;)
    {
        cout << "Choose a variant:";
        cout << endl << "1 - Celsius ( C ) to Kelvin ( K ) ";
        cout << endl << "2 - Kelvin ( K ) to Celsius ( C ) ";
        cout << endl;
        cin >> a;

        if (a == 1)
        {
            cout << "Enter degree Celsius ( C ): ";
            cin >> b;

            cout << endl << "Result in Kelvin ( K ) : " << b + 273;
        }
        else if (a == 2)
        {
            cout << "Enter degree Kelvin ( K ) : ";
            cin >> c;

            cout << endl << "Result in Celsius ( C ) : " << c - 273;
        }
        cout << endl << "You want to exit?";
        cout << endl << "y/n";
        cout << endl;
        cin >> action;
        if (action == 'y')
        {
            break;
        }
    }
}