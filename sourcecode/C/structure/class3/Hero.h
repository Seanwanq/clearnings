#ifndef HERO_H
#define HERO_H

#include <stdio.h>
#include <stdlib.h>

//define structure: Hero, Job, Ability, OnlineTime

typedef struct _job
{
    int          id;
    char *     name;
    char *     desc;       //description
}   Job;

typedef struct _ability
{
    int          id;
    char *     name;       //the name of the special ability
    char *    intro;       //the introduction of the special ability
}   Ability;

typedef struct _pubtime
{
    int        year;
    int       month;
    int         day;
}   PubTime;

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

//Job job;      <- to simplify the use of the structure

//to input some properties of the heros
void InputHero();

//to output some properties of the heros
void ShowHero();

#endif