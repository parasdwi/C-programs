#include<stdio.h>
#include<math.h>
int main(){
    FILE *fp;                         
    fp= fopen("sample.txt","r");
    printf("%c", fgetc(fp));    /* use to read file charecter by charecter. */     
    printf("%c", fgetc(fp)); 
    printf("%c", fgetc(fp)); 
    printf("%c", fgetc(fp)); 
    printf("%c", fgetc(fp)); 
    printf("%c", fgetc(fp)); 
    fclose(fp);   
    return 0;
}