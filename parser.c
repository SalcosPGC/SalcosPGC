#include<string.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    //Prompts to enter expression
    printf("Enter an expression: ");
    //For user entry
    scanf("%[^\n]%*c", str);
    printf("Expression to be solved: %s", str);

    //parses the input to be solved
    char * token = strtok(str, " ");

    while (token != NULL)
    {
        if(strncmp(token, "+", 1) == 0){
            printf("\n%s    PLUS", token);
        }
        else if(strncmp(token, "-", 1) == 0){
            printf("\n%s    MINUS", token);
        }
        else if(strncmp(token, "*", 1) == 0){
            printf("\n%s    MULT", token);
        }
        else if(strncmp(token, "/", 1) == 0){
            printf("\n%s    DIVIDE", token);
        }
        else if(strncmp(token, "^", 1) == 0){
            printf("\n%s    POWER", token);
        }
        else if(strncmp(token, "(", 1) == 0){
            printf("\n%s    LPAREN", token);
        }
        else if(strncmp(token, ")", 1) == 0){
            printf("\n%s    RPAREN", token);
        }
        else if(strncmp(token, "%", 1) == 0){
            printf("\n%s    REMAINDER", token);
        }
        else{
            printf("\n%s    ERROR", token);
        }
        token = strtok(NULL, " ");
    }

    return 0;
}
