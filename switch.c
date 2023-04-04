#include <stdio.h>
#include <stdlib.h>

int main(){
    int time = 90;

    switch (time)
    {
    case 30:
        printf("you are a good swimmer\n");
        break;
    case 60:
        printf("you are a great swimmer\n");
        break;
    case 90:
        printf("you are a the best swimmer\n");
        break;

    default:
        printf("invalid time");
        break;
    }
}