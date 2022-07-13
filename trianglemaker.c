#include <stdio.h>

int main()
{
    int rows, i, j;
    printf("Yo homie. How many rows are we making here? Don't you dare put <1 or >20!! Oh you should enter it here -------> ");
    scanf("%d", &rows);
    typedef enum { F, T } boolean;

    boolean boolish = T; 

    do{
        if(rows >= 1 && rows <= 20){
            for (i = 1; i<=rows; i++){
                for(j=i; j<rows; j++){
                    printf(" ");
                }
                for(j = 1; j<=(2*i-1); j++){
                    if(i==rows || j==1 || j==(2*i-1)){
                        printf("*");
                    }
                    else
                    printf(" ");
                    
                }

                printf("\n");
                
            }
            boolish = F;
            return boolish;

        }
        else if(rows == 0){
            printf("We cannot make rows that do not exist! Why dont you enter a valid one?");
            scanf("%d", &rows);
        }
        else if(rows <= 0){
            printf("This assignment didn't ask for inversion...yet. Why dont you enter a valid one?");
            scanf("%d", &rows);
        }
        else
        printf("Woah there partner. That there's too many rows! We ain't mathmeticians in these parts. Why dont you enter a valid one? ");
        scanf("%d", &rows);
    }while(boolish);
    
}
