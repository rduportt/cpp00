#include "Phonebook.class.hpp"
#include <iostream>


std::string truncate(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int main()
{
    Phonebook phonebook; 
    std::string command;

    while (1)
    {
        std::cout << "Ecrire votre commande : ADD | SEARCH | EXIT" << std::endl << std::endl;
        std::cin >> command;

        if (command == "ADD") 
        {
            Contact newContact;
            std::string input;
            int index = 0;
            index = phonebook.getContactCount() % 8;
            std::cin.ignore(); // Nettoyer le buffer

            do{
                std::cout << "First name :";
                std::getline(std::cin, input);
                if(input.empty())
                    std::cout << "This field cannot be empty!" << std::endl;
            } while (input.empty());
            newContact.setFirstName(input);

            do{
                std::cout << "Last name : ";
                std::getline(std::cin, input);
                if(input.empty())
                    std::cout << "This field cannot be empty!" << std::endl;
            } while (input.empty());
            newContact.setLastName(input);
            
            do{
                std::cout << "Nickname : ";
                std::getline(std::cin, input);
                if(input.empty())
                    std::cout << "This field cannot be empty!" << std::endl;
            } while (input.empty());
            newContact.setNickname(input);

            do{
                std::cout << "Phone Number : ";
                std::getline(std::cin, input);
                if(input.empty())
                    std::cout << "This field cannot be empty!" << std::endl;
            } while (input.empty());
            newContact.setPhoneNumber(input);

            do{
                std::cout << "Darkest secret : ";
                std::getline(std::cin, input);
                if(input.empty())
                    std::cout << "This field cannot be empty!" << std::endl;
            } while (input.empty());
            std::cout << std::endl;
            newContact.setDarkestSecret(input);

            phonebook.Add(newContact, index);
        }
        else if (command == "SEARCH") {
            phonebook.Search();
        }
        else if (command == "EXIT") {
            phonebook.Exit();
            break ;
        }
    }
    phonebook.~Phonebook();
    return 0;

}