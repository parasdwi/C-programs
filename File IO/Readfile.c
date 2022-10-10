#include <stdio.h>

int main()
{
    FILE *fp;
    char c1, c2;
    fp = fopen("sample.txt", "r");
    fscanf(fp, "%c", &c1);     /*fscanf can only read charecter at a time */
    fscanf(fp, "%c", &c2);
    fclose(fp);
    printf("%c %c", c1, c2);
    return 0;
}