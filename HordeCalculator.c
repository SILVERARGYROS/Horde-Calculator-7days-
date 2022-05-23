#include <stdio.h>

void calculateDays(void);
int main (void)
{
    // system("clear");

    printf("Welcome to Horde Calculator for 7 Days to Die\n");

    printf("Press 1 to check the number of days until next Horde Night\n");
    printf("Press 2 to calculate the total number of zombies incoming\n");
    printf("Press 3 to calculate the max number of zombies that will spawn at once\n");
    printf("Press 4 to view the possible zombie types that will attack\n");
    printf("Press 5 to view/change settings\n");
    printf("Press 0 to exit\n");

    int input;

    scanf("%d", &input);

    switch(input)
    {
        case 1:
            calculateDays();
        break;


        case 2:

        break;


        case 3:

        break;


        case 4:

        break;


        case 5:

        break;
    }
}

void calculateDays (void)
{
    int day; 
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