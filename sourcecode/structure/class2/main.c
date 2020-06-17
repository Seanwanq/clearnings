#include <stdio.h>

struct Martial
{
    int id;
    char name[50];
    int count;      //the quality of members in this martial
    int type;       //the type of the martial, 1->Good, 2->Middle, 3->Bad
};

struct Player
{
    int id;
    char name[50];
    char passward[50];
    char sex;
    struct Martial martial;     //the martial that the player joined
};

int main()
{
    //Player
    //Players have different martials
    struct Player player1 = {1, "GIOGIO", "123456", 'M', {1, "YoungerStar", 500, 3}};
    printf ("%s\t%s\n", player1.name, player1.martial.name);

    return 0;
}