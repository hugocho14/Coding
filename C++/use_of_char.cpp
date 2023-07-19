#include<stdio.h>
#include<conio.h>

int main(void)
{
    char nombre[10], a_paterno[10], a_materno[10];
    
    printf("\n\tShows the initials of a name\n\t");
    printf("Insert the first/middle name(s): \n\t");
    scanf("%s",nombre);
    printf("\n\tInsert 1st Surname: \n\t");
    scanf("%s",a_paterno);
    printf("\n\tInsert 2st Surname: \n\t");
    scanf("%s",a_materno);
    printf("Initials are %c,%c,%c",nombre[0],a_paterno[0],a_materno[0]);
    
    getch();
}