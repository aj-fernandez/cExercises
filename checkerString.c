#include <stdio.h>
int checker(char input[],char check[]);
int main()
{
    char input[40];
    char check[40];
    int i=0;
    printf("Hello!\nPlease enter a word or character:\n");
    scanf("%s",input);
    printf("I will now repeat this until you type it back to me.\n");
    scanf("%s",check);

    while (!checker(input,check))
    {
        printf("%s\n", input);
        scanf("%s",check);
    }

    printf("Good bye!");

    return 0;
}

int checker(char input[],char check[])
{
    int i,result=1;
    for(i=0; input[i]!='\0' || check[i]!='\0'; i++) {
        if(input[i] != check[i]) {
            result=0;
            break;
        }
    }
    return result;
}


