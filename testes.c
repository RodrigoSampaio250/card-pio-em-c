 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
void main()
{
    int escolha=0,i=0,j=0;
    char cardapio[3][3]={"carne1","carne2","carne3"};

    printf("    1    2    3  \n");
    for(i=0;i<3;i++){
            printf("1- ");
        for(j=0;j<3;j++){
        printf(" %s...",cardapio[i][j]);
    }
    printf("\n");
    }
}

