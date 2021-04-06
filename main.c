#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Num, remainder, size, result;
    int Array[20];
    /* the code multiples each number and save
    each digit in the array since no data type
     that allows this many digits to be saved */
    printf("\n Enter the number you want to find the factorial of: \n ");
    scanf("%d", &Num);
    Array[0] = 1;     // Initialize the array with only 1 digit, i.e. 1
    remainder = 0;      // There is no remainder
    size = 1;       // to start with there is only one digit in array - size of array
    for(int n = 2; n <= Num; n++)
    {
        for(int i = 0; i < size; i++)
        {
            result = (Array[i] * n) + remainder;  // This is doing multipicaton
            Array[i] = result % 10;           //Saves the digit
            remainder = result / 10;            // remainder (int so saves the digit)
        }
        while(remainder > 0)               // Loop for storing the remaining carry value to the array
        {
            Array[size++] = remainder % 10;   // value of res is the remainder of carry
            remainder /= 10;
        }
    }

    printf("\n The factorial of %d is = \n ",Num);
    for(int i = size-1; i >= 0; i--){   // Array is stored in reverse so printing in reverse
        printf("%d", Array[i]);
    }
    return 0;
}
