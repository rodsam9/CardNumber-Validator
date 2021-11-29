#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cardNum; //this will carry the number given by the user.

    int sum(0), sumDoubleEven(0), sumOdd(0), evenDigit(0), oddDigit(0);

    cout << "This program will check to see if your card is valid or invalid." << endl;

    do
    {
        cout << endl << "Please type in a card number to validate or type 'q' to quit ";

        cin >> cardNum; // Prompt user for card number

        if (cardNum == "q") break; // Exit the loop if user types in 'q'

        // This loop will repeat for every digit on card number.
        // Decreases by one on each pass from last position to first position
        for (int digitPos = cardNum.length(); digitPos > 0; digitPos--)
        {
            // Check if the position of digit is even
            if (digitPos % 2 == 0)

            {   // Execute this code
                oddDigit = (int)cardNum[digitPos - 1] - '0';

                sumOdd = sumOdd + oddDigit;
            }
            // Else the position of the digit is odd
            else
            {   // Execute this code
                evenDigit = ((int)cardNum[digitPos - 1] - '0') * 2;

                evenDigit = evenDigit % 10 + evenDigit / 10;

                sumDoubleEven = sumDoubleEven + evenDigit;
            }
        }

        // Get the sum of even and odd numbers
        sum = sumOdd + sumDoubleEven; 

        // Print out there card number
        cout << endl << "Your card is ";

        if (sum % 10 == 0) // If total sum is divisible by 10 then it's valid.
            cout << "valid" << endl;

        else // If total sum is not divisible by 10, then it's invalid.
            cout << "invalid" << endl;
       // Do all above unless user types in 'q' to quit.
    } while (cardNum != "q");

    return 0;
}
