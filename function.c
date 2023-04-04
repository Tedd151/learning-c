#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result = num * num * num;
    return result;

}
int main(){
    printf("answer is \n %f", cube(8.0), "\n");
}
