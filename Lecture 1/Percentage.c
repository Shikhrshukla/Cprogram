#include <stdio.h>

int main(){
    float Maths = 50;
    float Chemistry = 44;
    float Physics = 39;
    float English = 35;
    float Computer = 50;
    
    float Percentage = ((Maths+Chemistry+Physics+English+Computer)*100)/(5*60);
    printf("The Total Percentage is: %f", Percentage);

    return 0;
}