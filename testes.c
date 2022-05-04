// TESTES "IS ALGUMA COISA"

int main()
{
int var1 = 0x7F;
   int var2 = '2';
    
   if(ft_isascii(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }

      if(isascii(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
}


// TESTE MEMSET -- PRECISA VER SE A ASSINATURA ESTA CORRETA
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'a',15);
   puts(str);
   
   return(0);
}


// TESTE MEMMOMVE

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "aaaaaaaaaaaaaaaa";
   const char src[]  = "123456789";


   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

//   TESTE MEMCPY
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 5);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}

// TESTE MEMCHR
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

// TESTE STRCHR

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'h';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

// TESTE SRRCHR
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'w';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

// teste STRNCMP

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "ABCDEF");
   strcpy(str2, "abcdef");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}

//