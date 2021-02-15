#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);//declaration of functions because the errors by declaration

int main(void)
{
    int height = get_positive_int(); //variable height receive a number positive by function get_positive_int
    int i = 1;
    while (i <= height) //receive the height of piramid and how many times will run
    {

        for (int x = height; x > i; x--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");//components by piramid
        }
        ++i;
        printf("\n");//breacklines for end blocks
    }
}

int get_positive_int(void) //function of numbers positives by learned leassons week1
{
    int number; //variable local for verificate number is positive

    do
    {
        number = get_int("Height:"); //looping when number not are a number positive

    }
    while ((number < 1)
           || (number > 8));//condition for de puzzle for mario be executed correctly, number is greater than 0 or less 9(1-8)
    return number;//return number great for the program continue
}
