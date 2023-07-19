#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i, j, n;
    float k, c;
    char **arr, name[30], op;
    FILE* file;
    
    do{
        k=0;
        system("md C:\\prove");
        system("cls");
         
        file = fopen("C:\\prove\\grades.txt","w");
        
        printf("\tWhat's your name?\n\t");
        scanf("%s",name);
        fflush(stdin);
        
        printf("\tHow many subjects do you have?\n\t");
        scanf("%i",&n);
        int* A = (int*) malloc(n*sizeof(int));
        
        arr = (char**) malloc (n*sizeof(char*));
        for(i=0; i<n; i++)
            arr[i] = (char*) malloc(30*sizeof(char));
        
        for(i=0;i<n;i++){
            printf("\tGive me the subject number %i\n\t", i+1);
            scanf("%s", arr[i]);
        }
    
        for(int j=0;j<n;j++){
            printf("\tGive me the %s grade\n\t", arr[j]);
            scanf("%i",&A[j]);
            fflush(stdin);
            k+=A[j];
        }
        
        c=k/n;
        
        printf("\tYour final grade is: %0.2f", c);
        
        fprintf(file,"Name: %s",name);
        
        for(i=0;i<n;i++)
            fprintf(file,"\n%s grade: %i",arr[i],A[i]);
        fprintf(file, "\nFinal grade: %0.2f", c);
        
        free(A);
        free(arr);
        
        fclose(file);
        
        printf("Press s to repeat");
        op=getche();
        
    }while(op=='s'|| op=='S');
    
    getchar();
}