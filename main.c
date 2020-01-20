#include<stdio.h>
#include<math.h>

int main(void){

    int number;

    printf("\nWelcome to digit separator...\n\n");
    printf("Please enter a number between 1 and 32767 (-1 for exit...): ");
    scanf("%d",&number);

    while(number != -1){

        if(number < 1)
            printf("Please enter positive number...\n");
        else if(number < 10){
            printf("%d\n",number);
        }
        else if(number < 100){
            double tensDigit = floor((double) number / 10);
            double unitsDigit = number % 10;
            printf("%d  %d\n",(int) tensDigit, (int) unitsDigit);
        }
        else if(number < 1000){
            double hundredsDigit = floor((double)number / 100);
            double tensDigit = (number % 100) / 10;
            double unitsDigit = number % 10;
            printf("%d  %d  %d\n",(int) hundredsDigit,(int) tensDigit, (int) unitsDigit);
        }
        else if(number < 10000){
            double thousandsDigit = floor((double)number / 1000);
            double hundredsDigit = (number % 1000) / 100;
            double tensDigit =  (number % 100) / 10;
            double unitsDigit = number % 10;
            printf("%d  %d  %d  %d\n",(int) thousandsDigit,(int) hundredsDigit ,(int) tensDigit, (int) unitsDigit);
        }
        else if(number < 32767){
            double tensOfThousandsDigit = floor((double)number / 10000);
            double thousandsDigit = (number % 10000) / 1000;
            double hundredsDigit = (number % 1000) / 100;
            double tensDigit =  (number % 100) / 10;
            double unitsDigit = number % 10;
            printf("%d  %d  %d  %d  %d\n",(int) tensOfThousandsDigit, (int) thousandsDigit,(int) hundredsDigit ,(int) tensDigit, (int) unitsDigit);
        }
        else
            printf("Please enter a number between 1 and 32767!!!\n");

        printf("Please enter a number between 1 and 32767 (-1 for exit...): ");
        scanf("%d",&number);
    }
}

