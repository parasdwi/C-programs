#include<stdio.h>

int main(){
    FILE *pr;
    int c1,c2,c3;
    pr=fopen("pr1.txt","w");
    fprintf(pr,"23\n");
    fprintf(pr,"43\n");
    fprintf(pr,"53");
    fclose(pr);
    pr=fopen("pr1.txt","r");
    fscanf(pr,"%d %d %d",&c1,&c2,&c3);
    printf("%d %d %d",c1,c2,c3);
    fclose(pr);
    return 0;
}