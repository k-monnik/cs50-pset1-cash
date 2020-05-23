#include <stdio.h>
#include <cs50.h>
#include <math.h>

 
int main(void)
{
    
    //prompt user for change owed - get_float
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    } 
    while (dollars < 0);
    
    int cents = round(dollars * 100);
    int coins = 0;
    
    int denominations[] = {25, 10, 5, 1};
    int size = sizeof(denominations)/sizeof(int);
    for (int i =0; i < size; i++)
    {
        coins += cents / denominations[i];
        cents %= denominations[i];
    }
    //print number of coins
  printf("%i\n", coins);
}