#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, temp, rsum = 0, vcount = 0;
    float mean;
    while (1)
    {
        printf("[%d] Enter Integer: ", i);
        scanf("%d", &temp);
        if (temp < 0)
        {
            continue;
        }
        else if (temp == 0)
        {
            break;
        }
        else
        {
            vcount++;
            rsum += temp;
            i++;
        }
    }
    mean = rsum / vcount;
    printf("Average = %.2f.", mean);
    return 0;
}
