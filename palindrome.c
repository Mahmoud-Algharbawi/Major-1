#include "major1.h"

int palindrome(int userInput)
{   
    int binary[32] = {0};
    int original = userInput;

    bool pal = 1;

    //Convert to binary
    int i = 31;
    while(userInput != 0)
    {   
        binary[i--] = userInput & 1; // input the binary representation
        userInput = userInput >> 1; // shift right by 1
    }

    //Binary of User Input
    for(int j = 0; j < 32; j++)
    {
        printf("%d",binary[j]);
    }

    //Compare the binary output
    for(int j = 0, i = 31; j < i; j++, i--)
    { 
        if(binary[j] != binary[i])
        {
            pal = 0;
        }
    }

    if(pal == 0)
        printf("\nThe number %d is not a Palindrome.\n", original);
    else
        printf("\nThe number %d is a Palindrome.\n", original);
    
    int output = 0;
    
    for (int n = 0; n < 32; n++)
    {
        output = 10 * output + binary[n];
    }

    return output;
}