#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct  Hero1
{
    int id;
    char name[50];
    int level;
    int hp;
    int mp;
    char skill[50];
};

struct Hero2
{
    int id;
    char * name;
    int level;
    int hp;
    int mp;
    char skill[50];
};

int main()
{
    //use the structure
    struct Hero1 hero1;
    hero1.id = 1;
    hero1.level = 99;
    strcpy (hero1.name, "Dio");
    hero1.hp = 500;
    hero1.mp = 100;
    strcpy (hero1.skill, "The World!");
    printf ("%d\t%s\t%d\t%d\t%d\t%s\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);

    struct Hero1 hero2 = {2, "GIOGIO", 100, 501, 101, "Gold Experience Requiem"};
    printf ("%d\t%s\t%d\t%d\t%d\t%s\n", hero2.id, hero2.name, hero2.level, hero2.hp, hero2.mp, hero2.skill);


    struct Hero2 hero3 = {3, "JOJO", 101, 502, .skill = "The World!"};
    printf ("Please input the name you want to change:");
    hero3.name = (char *)malloc(50);
    scanf ("%s", hero3.name);
    printf ("%d\t%s\t%d\t%d\t%d\t%s\n", hero3.id, hero3.name, hero3.level, hero3.hp, hero3.mp, hero3.skill);

    return 0;
}