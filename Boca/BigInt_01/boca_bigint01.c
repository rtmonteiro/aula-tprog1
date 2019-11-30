//
// Created by Pichau on 22/11/2019.
//

#include <stdio.h>
#include <string.h>

void compara(char* n1,char* n2 ) {

    if(strlen(n1) == strlen(n2)){
        switch (strcmp(n1,n2)){
            case 1:
                printf("MAIOR");
                break;
            case -1:
                printf("MENOR");
                break;
            default:
                printf("IGUAL");
        }
    } else {
        if (strlen(n1) < strlen(n2)){
            printf("MENOR");
        } else {
            printf("MAIOR");
        }
    }
}

int main()
{
    char n1[102], n2[102];
    scanf("%s", n1);
    // printf("%s\n", n1);
    scanf("%s", n2);
    // printf("%s\n", n2);
    compara(n1,n2);
    return 0;
}