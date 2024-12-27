#include <iostream>
using namespace std;

int main()
{
    int i = 1; // Initialize row number
    while (i <= 5)
    {              // Loop for rows
        int j = 1; // Initialize column number
        while (j <= i)
        {                     // Loop for columns
            cout << i << " "; // Print the row number
            j++;              // Move to next column
        }
        cout << endl; // Move to the next line after each row
        i++;          // Move to the next row
    }
    return 0;
}
