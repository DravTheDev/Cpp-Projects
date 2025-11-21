#include <iostream>

int main()
{
    int x;

    std::cout << "Enter a Number Between 1-50: ";
    std::cin >> x;

    switch(x) {
        case 10:
            std::cout << "Your Number is 10!" << std::endl;
            break;
        case 20:
            std::cout << "Your Number is 20!" << std::endl;
            break;
        case 30:
            std::cout << "Your Number is 30!" << std::endl;
            break;
        case 40:
            std::cout << "Your Number is 40!" << std::endl;
            break;
        case 50:
            std::cout << "Your Numbers is 50!" << std::endl;
            break;
    }

    if (x > 0 and x < 10) {
        std::cout << "Your Number is Between 0 and 10!" << std::endl;
    } else if (x > 10 and x < 20) {
        std::cout << "Your Number is Between 10 and 20!" << std::endl;
    } else if (x > 20 and x < 30) {
        std::cout << "Your Number is Between 20 and 30!" << std::endl;
    } else if (x > 30 and x < 40) {
        std::cout << "Your Number is Between 30 and 40!" << std::endl;
    } else if (x > 40 and x < 50) {
        std::cout << "Your Number is Between 40 and 50!" << std::endl;
    } else if (x > 50 or x < 0) {
        std::cout << "Your Number is not Between 0 and 50!" << std::endl;
    }

    return 0;
}