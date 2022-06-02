#include <stdio.h>
#include <string.h>

int main(void)
{
    string window,text;

    gets(text);
    gets(window);
    

    printf("%s\n",window);
    printf("%s\n",text);

    puts(window);
    printf("\n");
    puts(text);

    printf("%d %d\n",strlen(window),strlen(text));
}