//passed test cases and submitted.
#include <stdbool.h>
#include <math.h>
bool isPerfectSquare(int num) {
    if (num<0)
    return false;
    else{
        int s= sqrt(num);
        if ((s*s)==num)
        return true;
        else 
        return false;
    }
}