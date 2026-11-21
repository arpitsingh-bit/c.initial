#include<stdio.h>
#include<string.h>
//nested string
typedef struct pokemon
{
    int hp;
    int power;
    char name[100];

}pokemon;
typedef struct legendpokemon
{
    pokemon legend;
    char ability[100];

} legendpokemon;
typedef struct godpokemon
{
    legendpokemon god;
    int superpower;

}godpokemon;
int main ()
{
    legendpokemon i;
    godpokemon a;
    a.superpower=1000;
    strcpy(a.god.ability,"stop time");
    a.god.legend.hp=200;
    i.legend.hp=299;
    printf("hp of ledend pokemon is %d\n",i.legend.hp);

    
    printf("hp of god pokemon a is %d :",a.god.legend.hp);

return 0;
}
