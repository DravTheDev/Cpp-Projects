#include <iostream>

class NewAccount {
    public:
        // Functions that can change the data
        NewAccount(const std::string& inputUsername, const std::string& inputPassword) {
        username = inputUsername;
        password = inputPassword;

        std::cout << "Setup Account!" << std::endl;
        std::cout << username << std::endl;
        std::cout << password << std::endl;
        }

        void menu(int& menuFunction);

    private:
        // The data itself
        float balance;
        std::string username;
        std::string password;
};

int main() {
    std::string username;
    std::string password;

    std::cout << "Enter a Username: ";
    getline(std::cin, username);

    std::cout << "Enter a Password: ";
    getline(std::cin, password);

    NewAccount Account(username, password);

    int menuSelection;

    //Account.menu(menuSelection);

    while (true) {
        Account.menu(menuSelection);
    }

    return 0;
}

// Menu Function to Loop Back to Every Time
void menu(int& menuSelection) {
    std::cout << "-- Bank System --" << std::endl;
    std::cout << "[1] View Account" << std::endl;
    std::cout << "[2] Add Balance" << std::endl;
    std::cout << "[3] Remove Balance" << std::endl;
    std::cout << ": ";
    std::cin >> menuSelection;

    switch (menuSelection) {
        case 1:
            std::cout << "Chose 1" << std::endl;
            //viewAccount();
            break;
        case 2:
            std::cout << "Chose 2" << std::endl;
            //addBalance();
            break;
        case 3:
            std::cout << "Chose 3" << std::endl;
            //removeBalance();
            break;
        default:
            std::cout << "Wrong Input!" << std::endl << std::endl;
    }
}

// View Account (Name, Balance)
void viewAccount() {

}

// Add Balance Function
void addBalance() {

}

// Remove Balance Function
void removeBalance() {

}

// Change Username Function
void changeUsername() {

}

// Change Password Function
void changePassword() {

}