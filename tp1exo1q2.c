#include<stdio.h>
int main(){
int m[5][5];
    int i,j,n;
    printf("donner la premiere diagonale:\n");
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
          if(i==j){
        printf("%d \n",m[i][j]);
          }
       }      
    }
    printf("donner deuxieme diagonale:");
    for(i=0;i<n;i++){
       for(j=(n-i-1);j<0;j--){
          if(i=j){
            printf("%d \n",m[i][j]);
          }
       }                    
    } 
    return 0;
}
