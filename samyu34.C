#include<string.h>
#include<stdio.h>
void main()
{
    char a[1000];
    int i,count=0;
    puts("ENTER PARAGRAPH");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='\n')
        count++;
    }
    printf("NO_OF_LINES : %d",count);
}
