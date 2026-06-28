#include "unicorn.h"

std::set<std::string> Unicorn::usedNames;

Unicorn::Unicorn(const std::string &newName)
{
    if (usedNames.count(newName))
    {
        std::cout << "Error: The name \"" << newName
                  << "\" is already taken!" << std::endl;
        valid = false;
    }
    else
    {
        name = newName;
        usedNames.insert(name);
        valid = true;
        std::cout << name << " has been created." << std::endl;
    }
}

Unicorn::~Unicorn()
{
    if (valid)
    {
        usedNames.erase(name);
        std::cout << name << " has disappeared." << std::endl;
    }
}