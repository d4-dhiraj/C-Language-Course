#include <stdio.h>
typedef struct players
{
    float score;
    int level;
} player;

int main()
{
    player p1;
    player *ptr = &p1;
    ptr->score = 83;
    //(*ptr).score =83;
    ptr->level = 15;
    //(*ptr).level=15;

    printf("Player's level is %d and score is %.2f\n", ptr->level, ptr->score);
    return 0;
}