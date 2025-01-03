//feature of structure 1.nessted
#include<stdio.h>
#include<String.h>
typedef struct pokemon
{
    int speed;
    int attack;
    char type[20];

}pokemon;
int main (){
    typedef struct legendarypokemon
{
    pokemon p1;
    char ability[20];

}legendarypokemon;


pokemon pikachu={100,70,"electric"};
pokemon charizard={80,120,"fire"};


legendarypokemon mewtwo;
mewtwo.p1.attack=130;
mewtwo.p1.speed=150;


printf("%d\n",pikachu.speed);
printf("%d\n",pikachu.attack);
printf("%s\n",strcpy(pikachu.type,"type"));
printf("%d",mewtwo.p1.speed);

    return 0;
}
