//// CÓDIGO 4.2 WHILE
#include <stdio.h>

int main() {
    int idade;
    printf ("Digite sua idade");
    scanf ("%d", &idade);

    while (idade < 18) {
    printf ("Você é menor de idade. Digite sua idade novamente: ");
    scanf ("%d", &idade);
        
    }
    

    printf ("Você é maior de idade");
   
   
   
    return 0;
}
