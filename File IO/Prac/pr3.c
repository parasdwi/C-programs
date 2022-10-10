#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    FILE *fp2;
    char c;
    int i;
    fp = fopen("sample.txt", "r");
    fp2 = fopen("b.txt", "w");
    c = fgetc(fp);
    while (c != EOF)
    {
        fputc(c, fp2);
        c = fgetc(fp);
    }
    fprintf(fp2,"\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}