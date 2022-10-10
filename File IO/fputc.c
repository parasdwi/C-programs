#include<stdio.h>
#include<math.h>
int main(){
    FILE *fp;                         
    fp= fopen("sample.txt","w");
    fputc('l',fp);
    fputc('o',fp);    /* use to write file charecter by charecter. */      
    fputc('v',fp);;      
    fputc('u',fp);         
    fclose(fp);   
    return 0;
}