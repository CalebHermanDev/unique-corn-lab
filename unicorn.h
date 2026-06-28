#ifndef UNICORN_H
#define UNICORN_H

#include <iostream>
#include <string>
#include <set>

class Unicorn
{
private:
    std::string name;
    bool valid;

    static std::set<std::string> usedNames;

public:
    Unicorn(const std::string &newName);
    ~Unicorn();
};

#endif