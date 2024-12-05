//13.cpp (25 pts)
#include <iostream>
using namespace std;

//const int SIZE = 4;
bool isPangram(string str);

int main()
{
    string str1 = "A quick brown fox jumps over the lazy dog";//true
    string str2 = "Jumbling vext frowzy hacks PDQ";//true
    string str3 = "It is a beautiful day at the Coeur dAlene"; //false
    //call the function
    if(isPangram(str1))
    {
        cout << "String 1 is a pangram\n";
    }
    else{
        cout << "String 1 is not a pangram\n";
    }
    if(isPangram(str2))
    {
        cout << "String 2 is a pangram\n";
    }
    else{
        cout << "String 2 is not a pangram\n";
    }
    if(isPangram(str3))
    {
        cout << "String 3 is a pangram\n";
    }
    else{
        cout << "String 3 is not a pangram\n";
    }

    return 0;
}

/**
* A pangram is a string that contains every letter of the alphabet.
* Write a function called isPangram, that accepts a string.
* The function should return true if the string contain a pangram in the English alphabet and false otherwise
**/
bool isPangram(string str)
{
    //int count = 0;
    for(int i = 97; i < 123; i++)
    {
        int count = 0;
        for(size_t j = 0; j < str.length(); j++)
        {
            if(str[j] == i || str[j] == i-32)
            {
                count++;
                continue;
            }
        }
        if(count == 0)
        {
            return false;
        }
    }
    return true;
    // if(count >= 26)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}
