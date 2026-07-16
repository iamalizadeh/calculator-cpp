/*
 * Project: Console Calculator
 * Author: Amirhossein Alizadeh
 * Language: C++
 * Description:
 * A menu-driven calculator supporting arithmetic operations,
 * factorial, power calculation and prime number checking.
 */
#include <iostream>
using namespace std;
void menu()
{
    cout << "***************** Main Menu ******************" << endl;
    cout << "1- Adding two numbers" << endl;
    cout << "2- Subtracting two numbers" << endl;
    cout << "3- Multiplying two numbers" << endl;
    cout << "4- Dividing two numbers" << endl;
    cout << "5- Factorial" << endl;
    cout << "6- Pow" << endl;
    cout << "7- Prime" << endl;
    cout << "8- Exit" << endl;
    cout << "Choose the option you want (1-8): ";
}
long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
double pow1(double a, int b)
{
    // Handle negative exponents
    if (b < 0)
    {
        double result = 1;
        for (int i = 1; i <= -b; i++)
            result *= a;
        return 1.0 / result; 
    }
    double result = 1;
    for (int i = 1; i <= b; i++)
        result *= a;
    return result;
}
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    enum MyChoice{ADD = 1,SUB,MUL,DIV,FACT,POW,PRIME,EXIT};
    while (true)
    {
        menu();
        int choice;
        while (true)
        {
            cin >> choice;
            if (!(cin.fail() || cin.bad()) && choice >= 1 && choice <= 8)
                break;
            cout << "Try again...\n";
            cin.clear();
            cin.ignore(100, '\n');
        }
        switch (choice)
        {
        case ADD:
        {
            double a, b;
            while (true)
            {
                cout << "a = ";
                cin >> a;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            while (true)
            {
                cout << "b = ";
                cin >> b;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << a << (b < 0 ? "" : "+") << b << " = " << a + b << endl;
            break;
        }
        case SUB:
        {
            double a, b;
            while (true)
            {
                cout << "a = ";
                cin >> a;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            while (true)
            {
                cout << "b = ";
                cin >> b;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            double b1 = -b; 
            cout << a << (b1 < 0 ? "" : "+") << b1 << " = " << a - b << endl;
            break;
        }
        case MUL:
        {
            double a, b;
            while (true)
            {
                cout << "a = ";
                cin >> a;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            while (true)
            {
                cout << "b = ";
                cin >> b;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        }
        case DIV:
        {
            double a, b;
            while (true)
            {
                cout << "a = ";
                cin >> a;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            while (true)
            {
                cout << "b = ";
                cin >> b;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            if (b != 0)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "error\n";
            break;
        }
        case FACT:
        {
            int n;
            while (true)
            {
                cout << "n = ";
                cin >> n;
                if (!(cin.fail() || cin.bad()) && n >= 0)
                    break;
                cout << "Try again... (n >= 0)\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << n << "! = " << factorial(n) << endl;
            break;
        }
        case POW:
        {
            double a;
            int b;
            while (true)
            {
                cout << "a = ";
                cin >> a;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            while (true)
            {
                cout << "b = ";
                cin >> b;
                if (!(cin.fail() || cin.bad()))
                    break;
                cout << "Try again...\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << endl;
            cout << a << "^" << b << " = " << pow1(a, b) << endl;
            break;
        }
        case PRIME:
        {
            int n;
            while (true)
            {
                cout << "n = ";
                cin >> n;
                if (!(cin.fail() || cin.bad()) && n >= 0)
                    break;
                cout << "Try again... (n >= 0)\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << endl;
            cout << n << (isPrime(n) ? " is prime." : " is not prime.") << endl;
            break;
        }
        case EXIT:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
        cout << endl;
    }
}