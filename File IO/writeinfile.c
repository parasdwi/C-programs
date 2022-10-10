#include<stdio.h>
#include<math.h>
int main(){
    FILE *fp;
    int num =99, num2;                           

    fp= fopen("sample.txt","w");
    fprintf(fp,"Love u zindgi %d times. \nDo you know, what i mean from zindigi ?",pow(2999,10));
    fprintf(fp,"%d",num2); 
    fclose(fp);   
    return 0;
}