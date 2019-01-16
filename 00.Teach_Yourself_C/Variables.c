//variable declaration,assign value,display the value
#include<stdio.h>
int main(void)
{
    //variable declaration
    int number;
    char character;
    float float_number;
    double double_number;

    //Assign Value
    number=100;
    character='A';
    float_number=100.125;
    double_number=102.2321;
    printf("The number is %d\n",number);
    printf("The character is %c\n",character);
    printf("The float_number is %f\n",float_number);
    printf("The double_number is %lf\n",double_number);

    return 0;
}
