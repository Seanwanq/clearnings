#include "Hero.h"

Hero heros[] = {
    {"DIO", 'M', "Soldier", 100, 200.00, "The World!", {2017, 3, 1}},
    {"JOJO", 'M', "Soldier", 102, 202.00, "The World!", {2018, 3, 2}},
    {"Neja", 'F', "Wizard", 50, 201.00, "Real Fire", {1999, 1, 2}},
};

void Show()
{
    //How to know the size of structral array?
    int len = sizeof (heros) / sizeof (Hero);
    //When the array elements use pointers, memory need to be assigned at first
    printf ("Please input the name: ");
    heros[0].name = (char *)malloc(50);
    scanf  ("%s", heros[0].name);
    //printf ("the quantity of the structral array: %d\n", len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf ("%s\t%s\t%d-%d-%d\n", (heros + i) -> name, heros[i].job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
    }
}