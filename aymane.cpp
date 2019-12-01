#include "aymane.hpp"
#include<iostream>
//--------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------

aymane::aymane(char *T)
{
    int taille,i=0;
    while(T[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    char chaine=*T;
}
//--------------------------------------------------------------
void aymane::ajoutSpace(char *chaine)
{
    int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    for(int j=0;j<taille;j++)
    {
        if((chaine[j]==','||chaine[j]=='.'||chaine[j]==':'||chaine[j]=='?'||chaine[j]=='!'||chaine[j]==';')&&chaine[j+1]!=' ')
        {
            for(int k=j;k<(taille+1);k++)
            {
                chaine[k+1]=chaine[k];
            }
            chaine[j]=' ';
        }
        else if((chaine[j]==':'||chaine[j]=='?'||chaine[j]=='!'||chaine[j]==';')&&chaine[j-1]!=' ')
        {
            for(int l=j;l=(taille+1);l++)
            {
                chaine[l]=chaine[l-1];
            }
            chaine[j-1]=' ';
        }
    }
}
//---------------------------------------------------------------
void aymane::deleteSpace(char *chaine)
{
     int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    if(chaine[0]==' ')
    {
        for(int j=0;j<(taille);j++)
        {
            chaine[j]=chaine[j+1];
        }
        taille-=1;
    }
    else if(chaine[taille-1]==' ')
    {
        chaine[taille-1]=chaine[taille];
        taille-=1;
    }
    else if((chaine[j]==','||chaine[j]=='.')&&chaine[j-1]!=' '){
        
    }
}