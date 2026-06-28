#include "unicorn.h"

int main()
{
    Unicorn u1("Sparkles");
    Unicorn u2("Rainbow");
    Unicorn u3("Sparkles");

    {
        Unicorn u4("Twinkle");
    }

    Unicorn u5("Twinkle");

    return 0;
}

// Thought Provoking Questions:
//
// 1. Keep a list of possible unicorn names in a set and 
// a seperate list of names currently in use. When creating 
// a new unicorn, choose from the set that has names that 
// haven't been used yet. only throw an error when every name 
// has been used.
//
// 2. Use a single shared set that stores names used by both 
// unicorns and living fairies. A name shall only be removed after 
// both the unicorn and its fairy are gone, ensuring names don't become
// duplicated.