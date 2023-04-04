#include <stdio.h>
#include <stdlib.h>

struct Car
{
    int age;
    int speed;

};

int main(){

    struct Car car1;
    car1.age = 10;
    car1.speed = 300;

    printf(" %d \n", car1.speed);


}