#include <stdio.h>
void main()
{
    int small,big,goal;
    printf("Enter no of small bricks");
    scanf("%d",&small);
    printf("Enter no of big bricks");
    scanf("%d",&big);
    printf("Enter no of goal length");
    scanf("%d",&goal);
    int required=goal/5;
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("false");
        }
    }
    else
    {
        int rem=goal-(big*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    }