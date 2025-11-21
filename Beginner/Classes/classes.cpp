#include <iostream>

class NewAccount {
    public:
        // Functions that can change the data
        NewAccount(std::string& inputUsername, std::string& inputPassword) {
        username = inputUsername;
        password = inputPassword;

        std::cout << "Setup Account!" << std::endl;
        std::cout << username << std::endl;
        std::cout << password << std::endl;
    }

    private:
        // The data itself
        float balance;
        std::string username;
        std::string password;
};

int main()
{
    std::string username;
    std::string password;

    std::cout << "Enter a Username: ";
    getline(std::cin, username);

    std::cout << "Enter a Password: ";
    getline(std::cin, password);

    NewAccount Account(username, password);

    return 0;
}

// Menu Function to Loop Back to Every Time

// Add Balance Function

// Remove Balance Function

// Change Username Function

// Change Password Function