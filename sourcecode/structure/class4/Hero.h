#ifndef HERO_H
#define HERO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct _myTime
{
    int        year;
    int       month;
    int         day;
}   MyTime;

typedef struct _hero
{
    char *      name;
    char         sex;
    char     job[20];
    int         life;
    double     speed;     //attack speed
    char ability[20];     //special ability
    MyTime   pubTime;     //The publish time of the hero
}   Hero;


void Show();              //Show the details of the hero

#endif