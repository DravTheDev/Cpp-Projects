#include <iostream>

class NewAccount {
    public:
        // Functions that can change the data
        NewAccount(const std::string& inputUsername, const std::string& inputPassword) {
        username = inputUsername;
        password = inputPassword;

        std::cout << std::endl << "Setup Account!" << std::endl << std::endl;
        }

        void menu(int& menuFunction, NewAccount& account);

    private:
        // The data itself
        float balance = 0;
        std::string username;
        std::string password;

        void viewAccount(const std::string& username, const float& balance);
        void addBalance(float& balance);
        void removeBalance(float& balance);
        void changeUsername();
        void changePassword();
};

bool checkNegative(const float& number) {
    if (number >= 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    std::string username;
    std::string password;

    std::cout << "Enter a Username: ";
    getline(std::cin, username);

    std::cout << "Enter a Password: ";
    getline(std::cin, password);

    NewAccount Account(username, password);

    int menuSelection;

    while (true) {
        Account.menu(menuSelection, Account);
    }

    return 0;
}

// Menu Function to Loop Back to Every Time
void NewAccount::menu(int& menuSelection, NewAccount& account) {
    std::cout << "-- Bank System --" << std::endl;
    std::cout << "[1] View Account" << std::endl;
    std::cout << "[2] Add Balance" << std::endl;
    std::cout << "[3] Remove Balance" << std::endl;
    std::cout << ": ";
    std::cin >> menuSelection;

    switch (menuSelection) {
        case 1:
            account.viewAccount(account.username, account.balance);
            //viewAccount();
            break;
        case 2:
            account.addBalance(account.balance);
            //addBalance();
            break;
        case 3:
            account.removeBalance(account.balance);
            //removeBalance();
            break;
        default:
            std::cout << "Wrong Input!" << std::endl << std::endl;
    }
}

// View Account (Name, Balance)
void NewAccount::viewAccount(const std::string& username, const float& balance) {
    std::cout << std::endl << "Username: " << username << std::endl;
    std::cout << "Balance: " << balance << std::endl <<std::endl;
}

// Add Balance Function
void NewAccount::addBalance(float& balance) {
    float input;
    std::cout << std::endl << "Enter Balance to Add: ";
    std::cin >> input;

    bool isInputNegative = checkNegative(input);

    if (isInputNegative) {
        std::cout << "Cannot Have a Negative Input!" << std::endl << std::endl;
        return;
    } else {
        balance += input;

        std::cout << "New Balance: " << balance << std::endl << std::endl;
    }
}

// Remove Balance Function
void NewAccount::removeBalance(float& balance) {
    float input;
    std::cout << "Enter Balance to Remove: ";
    std::cin >> input;

    bool isInputNegative = checkNegative(input);

    if (isInputNegative) {
        std::cout << "Cannot Have a Negative Input!" << std::endl << std::endl;
        return;
    }

    float newBalance = balance - input;
    bool isBalanceNegative = checkNegative(newBalance);

    if (isBalanceNegative) {
        std::cout << "Cannot Have a Negative Balance!" << std::endl << std::endl;
    } else {
        balance = newBalance;
        std::cout << "New Balance: " << balance << std::endl << std::endl;
    }
}

// Change Username Function
void NewAccount::changeUsername() {

}

// Change Password Function
void NewAccount::changePassword() {

}