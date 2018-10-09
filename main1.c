
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"configParse.h"


/* debug the *.c *.h files */
int main(void)
{
    char sGetValue[200] = "\0";
    int reV = -1;
    
    reV = GetConfigStr("config.test", "path", sGetValue);
    printf("get path, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n");

    reV = GetConfigStr("config.test", "ClassPath", sGetValue);
    printf("get ClassPath, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n");

    reV = GetConfigStr("config.test", "N", sGetValue);
    printf("get N, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n"); 
    
    reV = GetConfigStr("config.test", "w", sGetValue);
    printf("get w, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n"); 

    reV = GetConfigStr("config.test", "c1", sGetValue);
    printf("get c1, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n");     

    reV = GetConfigStr("config.test", "c2", sGetValue);
    printf("get c2, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n"); 
    
    reV = GetConfigStr("config.test", "maxIteration", sGetValue);
    printf("get maxIteration, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n");
    
    reV = GetConfigStr("config.test", "Unknown", sGetValue);
    printf("get Unknown, return %d, ", reV);
    printf("%s", sGetValue);
    printf("\n");    
    

    
    return 0;
}





