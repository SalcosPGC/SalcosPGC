#include<string.h>
#include<stdio.h>

int htoi(char *s){
    int i=0;
    int aValue = 0;
    int beginning = 1;
    int literal = strlen(s);
    while(i < literal){
        char x = s[i];
        
        //This if statement is made to avoid ox or oX
        if( (x == 'x' || x == 'X' || x == '0') && (i == 0 || i == 1)){
            i++;
            continue;
        }
        
        int theValue = 0;
        
        /*The following will get a numerical value from
        the character value entered. If it is not 0 through 9 or A through F
        it will return that the character at that position is not valid*/
        if(x >= '0' && x <= '9'){
            theValue = x - '0';
        }else if(x >= 'A' && x <='F'){
            theValue = 10 + x -'A';
        }else if(x >= 'a' && x <= 'f'){
            theValue = 10 + x - 'a';
        }else{
            printf("The entered value is not a hexadecimal number.");
        }
    
        aValue = aValue + (theValue * beginning);
        beginning = 16 * beginning;
        i++;
    }
    
    return aValue;
}

int main(){
    char str[20];
    int hexValue;
    printf("Please enter your hexidecimal value to be converted: ");
    scanf("%s",str);
    hexValue = htoi(str);
    printf("Hexadecimal converted to integer is: %d",hexValue);
}
