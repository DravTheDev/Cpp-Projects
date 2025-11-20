#include <iostream>

double add(double& x, double& y)
{
    return x + y;
}

double subt(double& x, double& y)
{
    return x - y;
}

double mult(double& x, double& y)
{
    return x * y;
}

double divd(double& x, double& y)
{
    return x / y;
}

int main()
{
    double x;
    double y;
    char op;
    double result;

    std::cout << "Enter a Number: ";
    std::cin >> x;

    std::cout << "Enter an Operator: ";
    std::cin >> op;

    std:: cout << "Enter Another Number: ";
    std::cin >> y;

    switch(op)
    {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = subt(x, y);
            break;
        case '*':
            result = mult(x, y);
            break;
        case '/':
            result = divd(x, y);
    }

    std::cout << std::endl << "Answer: " << result;

    return 0;
}