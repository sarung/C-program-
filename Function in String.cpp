#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);             
    displayString(str);     // Passing string c to function.    
    return 0;
}
void displayString(char str[]){
    printf("String Output: ");
    puts(str);
}
