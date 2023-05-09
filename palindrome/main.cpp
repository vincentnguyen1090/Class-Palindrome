#include <iostream>
#include "functions.h"
//bool isPalindrome(string phrase)


int main()
{
    std::string phrase = "A man a plan a canal Panama";

    /*char *begin;
    char *end;

    begin = &phrase[0];
    end = &phrase[phrase.length()-1];
    //*begin = 'g';
    //*end = 'h';
    end--;
    *end = 'g';
    std::cout << phrase;*/

    if(isPalindrome(phrase))
        std::cout << phrase << " is a palindrome";
    else
        std::cout << phrase << " is not a palindrome";
}
