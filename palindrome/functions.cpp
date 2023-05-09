//
// Created by vince on 2/21/2023.
//

#include "functions.h"
#include <algorithm>
bool isPalindrome(std::string phrase)
{
    //makes all characters lowercase
    for (int i = 0; i < phrase.length(); ++i)
    {
        phrase[i] = tolower(phrase[i]);
    }
    //removes spaces in the string
    std::string temp;
    for (int i = 0; i < phrase.length(); ++i)
    {
        if(phrase[i] != ' ') //doesn't read space and checks next character
            temp = temp + phrase[i]; //adds characters together
    }

    char *begin;
    char *end;
    begin = &temp[0]; //begin = to address of first element
    end = &temp[temp.length()-1]; //end = to address of last element

    //loop until paths cross/meet
    while(begin < end)
    {

        //checks the two characters
        if(*begin != *end)
        {
            return false;
        }
        begin++; //moves to right
        end--; //moves to left
    }
    return true;
}