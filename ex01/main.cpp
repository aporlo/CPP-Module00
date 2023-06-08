#include <iostream>

class Contacts
{
    char firstname[100];
    char lastname[100];
    char nickname[50];
    char phone[10];
    char darkest_s[100];

    public:
        void set_contact()
        {
            std::cout <<"enter firstname:";
            std::cin.getline(firstname, 100);
            std::cout <<"enter lastname:";
            std::cin.getline(lastname, 100);
            std::cout <<"enter nickname:";
            std::cin.getline(nickname, 50);
            std::cout <<"enter phone number:";
            std::cin.getline(phone, 100);
            std::cout <<"enter darkest secret:";
            std::cin.getline(darkest_s, 100);
        }

        void display_contact()
        {
            std::cout <<firstname<<"\t"<<lastname<<"\t"<<nickname<<"\t" << std::endl;
        }
};

int main()
{
    Contacts ph;
    std::string command;

    std::cout << "please enter your command: ";
    std::getline(std::cin >> std::ws, command);

    if (command != "EXIT")
    {
        if (command == "ADD")
        {
            ph.set_contact();
            ph.display_contact();
        }
        else if (command == "SEARCH")
            std::cout << "SEARCH" << std::endl;
        else
            std::cout << "command must be ADD , SEARCH , EXIT" << std::endl;
    }
    else
        std::cout << "bye bye" << std::endl;
    // std::cout << "firstname: ";
    // std::cin >> firstname;
    // std::cout << "lastname: ";
    // std::cin >> lastname;
    // // std::cout << "lastname: ";
    // // std::cin >> lastname << std::endl; 
    // // std::cout << "nickname: ";
    // // std::cin >> nickname;
    // std::cout << " 1 " << firstname << std::endl;
    // std::cout << " 2 " << lastname << std::endl;
    // // std::cout << nickname << std::endl;
    
    return 0;
}