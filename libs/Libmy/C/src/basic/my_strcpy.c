/*
** my_strcpy.c for my_strcpy in /home/darkyz/2_Jour04/master_repo
** 
** Made by SOULIE Sean
** Login   <soulie_s@etna-alternance.net>
** 
** Started on  Wed Sep 28 03:09:51 2016 SOULIE Sean
** Last update Thu Sep 29 06:54:19 2016 SOULIE Sean
*/

#include "common.h"

char            *my_strcpy(char *dest, char *src)
{
    int         i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

