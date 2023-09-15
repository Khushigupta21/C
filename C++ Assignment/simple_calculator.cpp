#include <iostream>
using namespace std;
class calc
{
public:
    float a, b;
    char op;
    calc()
    {
        cout << "Enter any Two number: ";
        cin >> a;
        cout << "Enter your number: ";
        cin >> b;
        cout << "Choose any Operator: ";
        cin >> op;


        switch (op)
        {
        case '+':
            cout << "Addition of a=" << a << "and b=" << b << "is" << a + b << endl;
            break;
        case '-':
            cout << "Subtarction of a=" << a << "and b=" << b << "is" << a - b << endl;
            break;
        case '*' :
            cout << "Multiply of a=" << a << "and b=" << b << "is" << a * b << endl;
            break;
         case '/':
            if (b == 0)
            {
                cout << "Not divisible by zero(0)";
            }
            else
            {
                cout << "Division of a=" << a << "and b=" << b << "is" << a/b << endl;
            }
            break;
        default:
            cout << "Invalid Choice";
        }
    }
};
int main()
{
    calc onj;
    return 0;
}
