#include <stdio.h>

int main(void)
{
	int i;

 i = 0;
 char *s = "practical practice";

 void _puts_recursion(char *s)
 {
         putchar(s[i]);
         i++;

         if (s[i] != '\0')
                 _puts_recursion(*s[i]);
         putchar('\0');
         putchar('\n');
 }
 return (0);
}
