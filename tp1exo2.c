#include <stdio.h>
int main(){
    int t[20][20];
    int i,j,n,p;
    printf("donner la taille de tableau:");
    scanf("%d",&n);
    printf("donner element t[i][j]:\n");
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
          scanf("%d",&t[i][j]);
       }
    }
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
          p=t[i][j];
          t[i][j]=t[j][i];
          t[j][i]=p;
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           printf("%d",t[i][j]);
       }
   }
 return 0;
}
