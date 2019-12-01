#include "aymane.hpp"
#include<iostream>
//---------------------Aymane Talibi--3IIR2------------------------------------------
using namespace std;
//---------------------Aymane Talibi--3IIR2------------------------------------------
aymane::aymane(char *T)
{
    //calcul de taille de la chaine:
    int taille,i=0;
    while(T[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    char chaine=*T;
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
void aymane::ajoutSpace(char *chaine)
{
    int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    for(int j=0;j<taille;j++)
    {   //ajouter des espaces après les points de ponctuations :
        if((chaine[j]==','||chaine[j]=='.'||chaine[j]==':'||chaine[j]=='?'||chaine[j]=='!'||chaine[j]==';')&&chaine[j+1]!=' ')
        {
            for(int k=j;k<(taille+1);k++)
            {
                chaine[k+1]=chaine[k];
            }
            chaine[j]=' ';
        }
        //ajouter des espaces avant ces points de ponctuations :
        else if((chaine[j]==':'||chaine[j]=='?'||chaine[j]=='!'||chaine[j]==';')&&chaine[j-1]!=' ')
        {
            for(int l=j;l=(taille+1);l++)
            {
                chaine[l+1]=chaine[l];
            }
            chaine[j-1]=' ';
        }
    }
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
void aymane::deleteSpace(char *chaine)
{
     int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    for(int j=0;j<taille;j++)
    {
        //effacer les espaces au debut:
        if(j==0 && chaine[j]==' ')
        {
            for(int k=j;k<taille;k++)
            {
                chaine[k]=chaine[k+1];
            }
            chaine[taille]=NULL;
            taille-=1;
        }
        //effacer les espaces à la fin:
        else if(j==(taille-1) && chaine[j]==' ')
        {
            chaine[taille-1]=chaine[taille];
            chaine[taille]=NULL;
            taille-=1;
        }
        //effacer les espaces avant la , et le . :
        else if(chaine[j]==','||chaine[j]=='.'&&chaine[j-1]==' ')
        {
            for(int l=(j-1);l<taille;l++)
            {
                chaine[l]=chaine[l+1];
            }
            chaine[taille]=NULL;
            taille-=1;
        }
    }
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
//ASCII : de 65 à 90 pour les lettres allant de A à Z, et de 97 à 122 pour les lettres allant de a à z.
void aymane::toMaj(char *chaine)
{
    int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    for(int j=0;j<taille;j++)
    {
        //maj au debut
        if(j==0)
        {
            int codeAscii=chaine[j];//pour avoir le code ASCII du caractere
            if(codeAscii>=97 && codeAscii<=122)//si le catactere est miniscule
            {
                codeAscii-=32; //97-65=32
                chaine[j]=codeAscii; //conversion en majiscule
            }
        }
        //maj après le . le ! le ? le ; et le : :
        else if(chaine[j]=='.'||chaine[j]=='!'||chaine[j]=='?'||chaine[j]==';'||chaine[j]==':')
        {
            int codeAscii2=chaine[j+1];
            if(codeAscii2>=97 && codeAscii2<=122)
            {
                codeAscii2-=32;
                chaine[j+1]=codeAscii2;
            }
        }
    }
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
//ASCII : de 65 à 90 pour les lettres allant de A à Z, et de 97 à 122 pour les lettres allant de a à z.
void aymane::toMin(char *chaine)
{
    int taille,i=0;
    while(chaine[i]++)  //(T[i]++)==(T[i]!='/0')
    {
        i++;
    }
    taille=(i+1);
    //min au milieu
    for(int j=1;j<taille;j++)
    {
        int codeAscii=chaine[j];
        if(codeAscii>=65&&codeAscii<=90&&(chaine[j-1]!='.'&&chaine[j-1]!='!'&&chaine[j-1]!='?'&&chaine[j-1]!=';'&&chaine[j-1]!=':'))
        {
            codeAscii+=32;//conversion en miniscule
            chaine[j]=codeAscii;
        }
    }
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
char aymane::string(char *chaine)
{
    aymane(*chaine);
    deleteSpace(chaine);
    ajoutSpace(chaine);
    toMin(chaine);
    toMaj(chaine);
    return *chaine;
}
//---------------------Aymane Talibi--3IIR2------------------------------------------
