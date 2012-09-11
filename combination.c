#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int combination(const char* s){
    int len=strlen(s);
    char *tmp=(char *)malloc(sizeof(char)*(len+1));
    if(!tmp) return -1;
    
    int i,j,k;
    for (i=1; i<pow(2,len); i++) {
        k=0;
        for (j=0; j<len; j++) {
            if((i>>j)&1){
                tmp[k++]=s[j];
            };
        }
        tmp[k]='\0';
        printf("%s\t",tmp);
    }
    printf("\n");
    free(tmp);
    return 0;
}

int main(){
    char *s="abcde";
    combination(s);
    return 0;
}