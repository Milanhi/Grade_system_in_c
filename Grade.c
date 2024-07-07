#include <stdio.h>

int main() 
{
    int x;
    char grade;

    
    printf("Enter the student's score:");
    scanf("%d", &x);

    
    if (x >= 90 && x <= 100) 
    {
        printf("%c", A);
    } 
    else if (x >= 80 && x < 90) 
    {
        printf("%c", B);
    } 
    else if (x >= 70 && x < 80)
    {
        printf("%c", C);
    }
     else if (x >= 60 && x < 70) 
    {
        printf("%c", D);
        
    }
     else if (x >= 0 && x < 60) 
    {
        printf("%c", F);
        
    }

    

    return 0;
}