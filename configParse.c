
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"configParse.h"


int GetConfigStr(char configFile[], char sKey[], char resValue[])
{
    FILE * fp;
    char sLine[2000] = "\0";
    
    fp = fopen(configFile, "r");
    if(fp == NULL) 
    {
        printf("error: %s is found.\n", configFile);
        exit(1);
    }    
    
    
    while( fgets (sLine, 1990, fp)!=NULL ) 
    {
        // skip commets.
        if( '#'==sLine[0] ||  ';'==sLine[0] )
            continue;
        
        // not the line of "key=value", skip.
        if( NULL == strchr(sLine, '=') )
            continue;
        
        {
            char buff[100] = "\0";
            char readKey[100] = "\0";
            char readValue[1900] = "\0";
            
            // buff may contains space
            sscanf(sLine, "%[^=]=%s", buff, readValue );
            sscanf(buff, "%s",readKey);
            
            //printf("debug: readKey)   %s\n", readKey);
            //printf("debug: readValue) %s\n", readValue);
            
            if( 0==strcmp(readKey, sKey) )
            {   
                // find out the sKey, return directly.
                strcpy(resValue, readValue);
                
                fclose(fp);
                return 1;
                
            }
        }
    }
    
    // scan the whole file, but not find sKey.
    strcpy(resValue, "\0");
    
    fclose(fp);
    return 0;
    
}

