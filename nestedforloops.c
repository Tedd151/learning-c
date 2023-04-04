#include <stdio.h>
#include <stdlib.h>

int main(){

    int nums[4][2] = {
        {7, 9},
        {9, 7},
        {4, 6},
        {8, 3}
    };

    int i, p;
    for (i = 0; i < 4; i++)
    {
        for (p = 0; p < 2; p++)
        {

            printf("%d,", nums[i][p]);
        }
    printf("\n");   
    };
    
}

