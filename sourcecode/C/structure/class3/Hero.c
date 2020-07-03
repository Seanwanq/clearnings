#include "Hero.h"

/*
typedef struct _hero
{
    int          id;
    char *     name;
    char *      sex;
    Job         job;
    double       hp;
    double    speed;       //attack speed
    Ability ability;       //special ability
    PubTime pubTime;
}   Hero;
*/

Hero heros[5];
Job jobs[5] = {
    {1, "Master",            "I can use magic."},
    {2, "Assassin", "To kill someone secretly."},
    {3, "Soldier",              "Great Attack."},
    {4, "Pilot",                  "I'm Gundam."},
    {5, "Shooter",  "My bow is quite powerful."}
};

void InputHero()
{
    int jobChoice;
    //dynamic input
    int i, j;
    for (i = 0; i < 1; i++)
    {
        printf ("Please input the info of the hero%d\n", i + 1);
        heros[i].id = i + 1;
        printf ("name: ");
        heros[i].name = (char *)malloc(50);
        scanf  ("%s", heros[i].name);
        printf ("Please input the sex of the hero: (M / F)");
        heros[i].sex = (char *)malloc(sizeof (char));
        scanf  ("%s", heros[i].sex);
        fflush (stdin);     //a good habit: clean the buffer after input a character
        //good users' experience: setting a job array, letting the users to choose
        for (j = 0; j < 5; j++)
        {
            printf ("%d.%s\n", jobs[j].id, jobs[j].name);
        }
        printf ("please choose your career: (numbers from 1 to 5)");
        scanf  ("%d", &jobChoice);
        heros[i].job = jobs[jobChoice - 1];
        printf ("[%s]'s current job: [%s]\n", heros[i].name, heros[i].job.name);

    }
}