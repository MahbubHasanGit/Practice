#include<stdio.h>
int main(void)
{
    int temp[31],i,min,max,days,avg;
    printf("How many days in the month:");
    scanf("%d",&days);

    for(i=0;i<days;i++){
        printf("Enter noonday temperature for days %d:",i+1);
        scanf("%d",&temp[i]);
    }

    avg=0;
    for(i=1;i<days;i++){
        avg=avg+temp[i];
    }
    printf("The average temperature is %d\n",avg/days);
    min=200;
    max=0;
    for(i=0;i<days;i++){
        if(min>temp[i]){
            min=temp[i];
        }
        if(max<temp[i]){
            max=temp[i];
        }
    }
    printf("Minimum temperature :%d\n",min);
    printf("Maximum temperature :%d\n",max);

    return 0;
}
