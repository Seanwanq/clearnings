#ifndef HERO_H
#define HERO_H

typedef struct _myTime
{
    int        year;
    int       month;
    int         day;
}   MyTime;

typedef struct _hero
{
    char    name[50];
    char         sex;
    char     job[20];
    int         life;
    double     speed;     //attack speed
    char ability[20];     //special ability
    MyTime   pubTime;     //The publish time of the hero
}   Hero;


#endif