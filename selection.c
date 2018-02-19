#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int array[100]; // initial array
    int n; // size of the array
    int i; // counter
    int swap; // the buffer for swapping
    int min; // integer for storing the lowest position of the array
    
    printf("How many numbers do you want to enter?\n");
    n = get_int();
    
    printf("Please enter your numbers in any order:\n");
    
    for (i = 0; i < n; i++)
    {
        array[i] = get_int();
    }
    
    printf("The numbers entered were:\n");
    for (i = 0; i < n; i++)
    {
        printf("%i, ", array[i]);
    }
    printf("\n");
    

    

    for (int j = 0; j < n-1; j++)
    {
        min = j;
        for (int k = j+1; k < n; k++)
        {
            if (array[k] < array[min])
                min = k;
        }
            if (min != j)
            {
                swap = array[j];
                array[j] = array[min];
                array[min] = swap;
            }
        
    }

/*
    for (int j = 0; j < n-1; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (array[k] < array[j])
            {
                swap = array[j];
                array[j] = array[k];
                array[k] = swap;
            }
        }
    }
    
    */
    

    
    printf("Sorted list:\n");
    
    for (i = 0; i < n; i++)
        printf("%i\n", array[i]);
        
    
    return 0;
    
}
