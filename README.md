#include<stdio.h>
int main() {
    char M[5][5]= {{'1','2','3','4','5'},{'7','a','c','8','d'},{'c','9','4','z','8'},
        {'5','6','p','n','3'},{'2','9','t','m','k'}
    };
    int i,j;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("%c ",M[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (i%2==0)
                printf(" %c",M[i][j]);
        }
        printf(" \n ");
        
        for(j=0;j<5;j++){
        if(j%2 != 0)
        printf("%c",M[i][j]);}
    }
    return 0;