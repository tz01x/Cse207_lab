#include<iostream>
#include<string.h>
#include <math.h>
using namespace std;
bool isPalRec(char str[],
              int s, int e)
{
    // If there is only one character
    if (s == e)
        return true;

    // If first and last
    // characters do not match
    if (str[s] != str[e])
        return false;

    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e )
        return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str); //

// An empty string is
// considered as palindrome
    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);

}

int recursion_rev_num(int num)
{
    /**tis function will reverse the number */
    if(num==0)
        return 0;

    int digit=(int)log10(num);///how many digit in a number

    return ((num%10 * pow(10,digit) )+ recursion_rev_num(num/10));
}

bool is_palindrome_number(int num)
{
    if(num==recursion_rev_num(num))
    {
        return true;
    }
    return false;
}





int main()
{
    int num=101;
    char na[]="102201";
    if(isPalindrome(na))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}


