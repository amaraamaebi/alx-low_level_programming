#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        int last_digit = n % 10;
        char str[21];
        if (last_digit > 5)
        {
                str = "and is greater than 5"
        }
        else if (last_digit == 0)
        {
                str = "and is 0"
        }
        else
        {
                str = "and is less than 6 and not 0"
        }
        printf("Last digit of %d is %c %s" , n, last_digit, str)
        return (0);
}
