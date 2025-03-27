#include <stdio.h>
int main(){


char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tabuleiro[10][10] = {0};

for (int i = 1; i < 10; i++){
for (int j = 1; j < 10; j++)
{
    // declarando onde "pintar" o tabuleiro
    if ((i== 2 && j == 4) || (i== 2 && j ==3 )||
          (i== 2 && j==5) || (i == 5 && j==7)||
          (i== 6 && j==7) || (i == 7 && j==7)||
          (i== 6 && j==3) || (i == 5 && j==4)||
          (i== 4 && j==5) || (i== 3 && j==7)||
           (i== 2 && j==8)||  (i== 1 && j==9)
          
          
          
          )



          { tabuleiro[i][j] =3;
          
          } else{
            tabuleiro[i][j]=0;
          }
} 
}
  







printf("*** tabuleiro batalha naval ***\n");
printf("\n");

 printf("    ");
for (int j = 0; j < 10; j++)
{  
{ 
    printf("%2c ", colunas[j]); printf(" ");
    
}   
   
}   
printf("\n"); 

    
    for (int i = 0; i < 10; i++)
     {
    printf("%2d ", linhas[i]);  

        for (int j = 0; j < 10; j++) {
    printf(" %2d ", tabuleiro[i][j]);  
        }
        printf("\n");  
    }
    
  

    






return 0;
}
