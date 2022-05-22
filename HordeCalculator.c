#include <stdio.h>

int main (void)
{
    // system("clear");

    int day; 

    printf("Welcome to Day calculator for & days to die\n");
    printf("Please enter the day you are in: ");

    int dayCheck = 0;
    do
    {
        scanf("%d", &day);
        if(day < 1)
        {
            dayCheck = 1;
            printf("Please enter a valid day number: ");
        }
        else
        {
            dayCheck = 0;
        }
    }while(dayCheck == 1);
    printf("\n");

    int frequency = 7;
    // printf("Please enter how often do BloodMoons show up: ");
    // scanf("%d", &frequency);


    if(day % frequency == 0)
    {
        printf("Next Blood Moon is TODAY!\n");
    }
    else
    {
        int bloodmoon = day + 7 - (day % frequency);
        printf("Next Blood Moon will be in day %d.\n", bloodmoon);
        printf("You still have %d days to prepare.\n", bloodmoon - day + 1);

    }
    printf("Good luck!!!\n");
    printf("\nPress any button to close...");
    getchar();
    getchar();
}