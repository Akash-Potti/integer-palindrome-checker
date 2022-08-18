#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0, rem, temp;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    if (num == reverse)
        cout << "The number " << num << " is a palindrome: ";
    else
        cout << "The number " << num << " is not a palindrome.";
    return 0;
}