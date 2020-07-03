#include "Hero.h"

Hero heros[100] = {
    {"DIO", 'M', "Soldier", 100, 200.00, "The World!", {2017, 3, 1}},
    {"JOJO", 'M', "Soldier", 102, 202.00, "The World!", {2018, 3, 2}},
    {"Neja", 'F', "Wizard", 50, 201.00, "Real Fire", {1999, 1, 2}},
};

int count = 3;      //the number of heros

void Input()
{
    //input content
    //after inputting the first item, asking whether need to continue
    char answer = 'y';
    do{
        if (count == 100)
        {
            printf ("The place for hero is full.");
            break;
        }
        printf ("now input the %dth hero's info\n", count + 1);
        printf ("hero's name: ");
        heros[count].name = (char *)malloc(50);
        scanf  ("%s", heros[count].name);
        printf ("sex: (M / F)\n");
        heros[count].sex = (char *)malloc(sizeof (char));
        scanf  ("%s", heros[count].sex);
        printf ("job: \n");
        heros[count].job = (char *)malloc(50);
        scanf  ("%s", heros[count].job);
        heros[count].life = 1000;
        heros[count].speed = 0.655;
        heros[count].ability = "fly";
        heros[count].pubTime.year = 2020;
        heros[count].pubTime.month = 6;
        heros[count].pubTime.day = 18;


        count++;        //after the input, the num of heros + 1
        printf ("Whether to keep inputting? (y / n)");
        answer = getch();       //the user don't need to press ENTER
    }while(answer == 'y' || answer == 'Y');
}

void Show()
{
    //How to know the size of structral array?
    //int len = sizeof (heros) / sizeof (Hero);
    //When the array elements use pointers, memory need to be assigned at first
    //printf ("Please input the name: ");
    //heros[0].name = (char *)malloc(50);
    //scanf  ("%s", heros[0].name);
    //printf ("the quantity of the structral array: %d\n", len);
    int i;
    printf ("\n");
    for (i = 0; i < count; i++)
    {
        printf ("%s\t%s\t%d-%d-%d\n", (heros + i) -> name, heros[i].job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
    }
}