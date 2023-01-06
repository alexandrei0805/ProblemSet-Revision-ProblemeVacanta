#include <csbootcamp.h>
#include <stdio.h>

int main(void)
{
int a = get_int("Number: ");
    if(a==16)
    {
        printf("The number is valid;Mastercard.");
        
    }
    else if(a!=16)
    {
        printf("The number is invalid.");
    }
    
}
