/*ENZO HOLZMANN GAIO EX 08 RA 2449013 
*/

#include"queue.h"
#define NUM 5
#define DEATH 3

int main()
{   
    int i;
    int last, x, num= NUM, death = DEATH;
    Queue* deathcircle = create(num+1);
    for(i=0;i<num;i++)
    {
        enqueue(deathcircle,i+1);
    }
    while(!empty(deathcircle))
    {   
        for(i=0;i<death-1;i++)
        {
            x=dequeue(deathcircle);
            enqueue(deathcircle,x);
        }
            last=dequeue(deathcircle);
    }
    printf("%d\n", last);

    destroy(deathcircle);
    return 0;
}