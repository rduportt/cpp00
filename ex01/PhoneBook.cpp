#include "Phonebook.class.hpp"

Contact::Contact() 
    : first_name(""), last_name(""), nickname(""), 
      phone_number(""), darkest_secret("") 
{
    // std::cout << "Contact created" << std::endl;
}

Contact::~Contact() 
{
    // std::cout << "Contact destroyed" << std::endl;
}

Phonebook::Phonebook() : Contact_count(0)
{
    // std::cout << "PhoneBook created" << std::endl;
}

Phonebook::~Phonebook() 
{
    // std::cout << "PhoneBook destroyed" << std::endl;
}

void Contact::setFirstName(const std::string &fn) { first_name = fn; }
void Contact::setLastName(const std::string &ln) { last_name = ln; }
void Contact::setNickname(const std::string &nn) { nickname = nn; }
void Contact::setPhoneNumber(const std::string &pn) { phone_number = pn; }
void Contact::setDarkestSecret(const std::string &ds) { darkest_secret = ds; }

std::string Contact::getFirstName() const { return first_name; }
std::string Contact::getLastName() const { return last_name; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phone_number; }
std::string Contact::getDarkestSecret() const { return darkest_secret; }

int Phonebook::getContactCount() const { return Contact_count; }


void Phonebook::Add(Contact NewContact, int index)
{
    contacts[index] = NewContact;
    Contact_count++;
};

void Phonebook::Search()
{
    int j = 0;
    int Contact_show = Contact_count;
    if (Contact_count > 8)
        Contact_show = 8;
    std::cout << "|     Index|First Name| Last name|  Nickname|" << std::endl;

    for (int i = 0; i < Contact_show; i++)
        std::cout << "|" << std::setw (10) << i << "|"
        << std::setw (10) << truncate(contacts[i].getFirstName()) << "|"
        << std::setw (10) << truncate(contacts[i].getLastName()) << "|"
        << std::setw (10) << truncate(contacts[i].getNickname()) << "|" << std::endl;
    std::cout << "Inserer un index" << std::endl;  std::cin >> j;
    if (j >= Contact_show || j < 0)
        std::cout << "Mauvais index" << std::endl;
    else
        std::cout << contacts[j].getFirstName() << std::endl << contacts[j].getLastName() << std::endl << contacts[j].getNickname() << std::endl << contacts[j].getPhoneNumber() << std::endl << contacts[j].getDarkestSecret() << std::endl;
    std::cout << std::endl;
};

void Phonebook::Exit()
{
    std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
}
