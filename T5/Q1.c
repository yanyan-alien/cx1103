#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct circle {
double radius;
double x;
double y;
};

int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

int main()
{
    struct circle cc[2];
    int i, o_intersect=intersect(cc[0], cc[1]), o_contain = contain(&cc[0], &cc[1]);
    for(i=0;i<2;i++)
    {
        printf("Please enter the radius of circle %d:\n",i+1);
        scanf("%lf", &cc[i].radius);
        printf("Please enter the x coordinate of the centre of circle %d:\n", i+1);
        scanf("%lf", &cc[i].x);
        printf("Please enter the y coordinate of the centre of circle %d:\n", i+1);
        scanf("%lf", &cc[i].y);
    }
    if(o_intersect)printf("The 2 circles intersect! ^_^\n");
    else printf("The 2 circles do not intersect! :0\n");

    if(o_contain)printf("Circle 1 contains Circle 2\n");
    else printf("Circle 1 does not contain Circle 2\n");
    return 0;
}

int intersect(struct circle c1, struct circle c2)
{
    double sum_radius = c1.radius + c2.radius;
    double distance = sqrt((c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y));
    if(distance<=sum_radius)return 1;
    else return 0;
}


int contain(struct circle *c1, struct circle *c2)
{
    double distance = sqrt(((*c1).x-(*c2).x)*((*c1).x-(*c2).x) + ((*c1).y-(*c2).y)*((*c1).y-(*c2).y));
    if((*c1).radius>=distance+(*c2).radius)return 1;
    else return 0;
}
