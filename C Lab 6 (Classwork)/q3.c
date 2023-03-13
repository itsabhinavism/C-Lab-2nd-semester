// Write a currency program that tells you how many numbers of 100, 50, 20, 10, 5, 2 and 1 Rs notes will be needed for a given amount of money. For example if the total amount is Rs 545 then five 100 Rs notes, two 20 Rs notes and one 5 Rs note will be needed.
#include <stdio.h>
void main()
{
    int amt, samt;
    int notes;
    printf("Enter the amount- ");
    scanf("%d", &amt);
    samt = amt;
    while (amt != 0)
    {
        if (amt >= 100)
        {
            notes = amt / 100;
            amt = amt - (notes * 100);
            printf("\n No of 100 rupees notes required = %d ", notes);
        }
        else if (amt >= 50 && amt < 100)
        {
            notes = amt / 50;
            amt = amt - (notes * 50);
            printf("\n No of 50 rupees notes required = %d ", notes);
        }
        else if (amt >= 20 && amt < 50)
        {
            notes = amt / 20;
            amt = amt - (notes * 20);
            printf("\n No of 20 rupees notes required = %d ", notes);
        }
        else if (amt >= 10 && amt < 20)
        {
            notes = amt / 10;
            amt = amt - (notes * 10);
            printf("\n No of 10 rupees notes required = %d ", notes);
        }
        else if (amt >= 5 && amt < 10)
        {
            notes = amt / 5;
            amt = amt - (notes * 5);
            printf("\n No of 5 rupees notes required = %d ", notes);
        }
        else if (amt >= 2 && amt < 5)
        {
            notes = amt / 2;
            amt = amt - (notes * 2);
            printf("\n No of 2 rupees notes required = %d ", notes);
        }
        else
        {
            notes = amt;
            amt = amt - (notes * 1);
            printf("\n No of 1 rupees notes required = %d ", notes);
        }
    }
}
