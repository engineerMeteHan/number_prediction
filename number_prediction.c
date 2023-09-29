/// Engineer: Metehan Gencer
// In this example, We write number prediction program with using do-while loop.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int sayi, deneme = 0;

    srand(time(NULL));
    int random = rand() % 100;
     printf("Appointed: %d\n", random);

    do
    {
        printf("Type a number :");
        scanf("%d", &sayi);

        if(sayi < random)
            printf("Make the number bigger\n");
        else if(sayi > random)
            printf("Make the number smaller\n ");
        deneme++;
    } while(sayi != random);

    printf("Congratulations You guessed it %d try.", deneme);
     return 0;
}
