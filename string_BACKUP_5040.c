#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

<<<<<<< HEAD

int newmyfunc()
{

	prinf ("Added new function");
=======
int fundtion3()
{


	printf ("Added fuctions3");
>>>>>>> 27cb8b7922a7763d2002d80087760c4748c285f6
}


int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
