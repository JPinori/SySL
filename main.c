#include <stdio.h>

int main() {
   char texto[50];
   int p=0;
   int indice=0;
	   printf( "Introduzca un texto (50 letras maximo): " );
	   scanf( "%s", texto );

      char salida[50];
      while (texto[p] != '\0')
      {
         
            if (texto[p]>64 && texto[p]<91){
            salida[indice] = texto[p]+32;
            indice++;
            }
            else if (texto[p]>96 && texto[p]<123){
            salida[indice] = texto[p]-32;
            indice++;
            }else if (texto[p]>47 && texto[p]<58){
               
            }else{
               salida[indice] = texto[p];
               indice++;
            }
         p++;
      }
   
   printf( "El texto que ha escrito es: %s\n", salida );

   /*
   pr=c;
   if(c-pr!=0){
      printf("%d", pr);
   }

   if(a>64 && a<91){
   a = a+32;
   printf("%d ", a);
   printf("%c", a);
   }

   if(a>96 && a<123){
   a = a-32;
   printf("%d ", a);
   printf("%c", a);
   }
   */
   return 0;
}