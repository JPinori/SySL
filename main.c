#include <stdio.h>

int main() {
   char entrada;
   char salida;
      while ((entrada=getchar()) != EOF)
      {
         
            if (entrada>64 && entrada<91){
            salida= entrada+32;
         
            }
            else if (entrada>96 && entrada<123){
            salida= entrada-32;
         
            }else if (entrada>47 && entrada<58){
               
            }else{
               salida= entrada;
            
            }
            putchar(salida);
      }

      

   return 0;
}
