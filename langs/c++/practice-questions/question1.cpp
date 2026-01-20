#include <iostream>
using namespace std;

class TaxCalculator
{

public:
    double calculate(int income)
    {
        return income * 0.10;
    }

    double calculate(int income, int age)
    {
        if (age <= 60)
        {
            return income * 0.10;
        }
        else
        {
            return income * 0.05;
        }
    }

    double calculate(double income)
    {
        return income * 0.15;
    }
};

int main()
{
    TaxCalculator tc;

    int income1, income2, age;
    double income3;

    cout << "Enter Income: " << endl;
    cin >> income1;
    cout << "Tax:- " << tc.calculate(income1) << endl;

    cout << "Enter Income: " << endl;
    cin >> income2 >> age;
    cout << "Tax:- " << tc.calculate(income2, age) << endl;

    cout << "Enter Income: " << endl;
    cin >> income3;
    cout << "Tax:- " << tc.calculate(income3) << endl;

    return 0;
}