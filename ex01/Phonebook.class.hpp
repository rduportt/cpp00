#ifndef PHONEBOOK_CLASS_HPP_
#define PHONEBOOK_CLASS_HPP_

#include <iostream>
#include <iomanip>

class Contact
{
    public:
    Contact();
    ~Contact();

    void setFirstName(const std::string &fn);
    void setLastName(const std::string &ln);
    void setNickname(const std::string &nn);
    void setPhoneNumber(const std::string &pn);
    void setDarkestSecret(const std::string &ds);
    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        void Add(Contact NewContact, int index);
        void Search();
        void Exit();
        int getContactCount() const;

    private:
        Contact contacts[8];
        int Contact_count;
};

std::string truncate(const std::string &str);

#endif