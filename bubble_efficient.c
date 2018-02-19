#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int array[100]; // initial array
    int n; // size of the array
    int swap; // the buffer for swapping 
    int swapCount = 1;
    bool swapped;
    
    printf("How many numbers do you want to enter?\n");
    n = get_int();
    
    printf("Please enter your numbers in any order:\n");
    
    for (int i = 0; i < n; i++)
    {
        array[i] = get_int();
    }
    
    
    printf("The numbers entered were:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%i, ", array[j]);
    }
    printf("\n");
    
        
        
    for (int c = 0; c < (n - 1); c++)
    {
        swapped = false;
        swapCount =0;
            
            for (int d = 0; d < n - c - 1; d++)
            {
                if (array[d] > array[d+1])
                {
                    swap = array[d];
                    array[d] = array[d+1];
                    array[d+1] = swap;
                    swapped = true;
                    swapCount += 1;
                    printf("Number of swaps on pass %i: %i\n", c, swapCount);
                } 
                
            }
            if (swapped == false)
            break;
            
            
        }
    
    
    printf("Sorted list:\n");
    
    for (int c = 0; c < n; c++)
    {
        printf("%i\n", array[c]);
        
    }
    
    return 0;
    
}