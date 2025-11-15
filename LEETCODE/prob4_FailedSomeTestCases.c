//this code passed 76/102 testcases.
#include <stdbool.h>
bool isValid(char* s) {
    if ((s[0]=='(' && s[1]==')' )|| (s[0]=='{' && s[1]=='}') || (s[0]=='['&&s[1]==']'))
    return true;
    else 
    return false;
}