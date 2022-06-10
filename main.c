#include <stdio.h>
#include <ctype.h>

int main() {
   char entrada;
      while ((entrada=getchar()) != EOF)
      {
            if (isupper(entrada)){
               entrada = tolower(entrada);
               putchar(entrada);
         
            }
            else if (islower(entrada)){
               entrada = toupper(entrada);
               putchar(entrada);

         
            }else if (!(isdigit(entrada))){

               putchar(entrada);
            }
            
      }

   return 0;
}
