#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    c=fgetc(fp);
    while (c!= EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    fclose(fp);
    return 0;
}