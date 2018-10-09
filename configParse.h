
#ifndef  _configParse_h_
 
#define  _configParse_h_

/*
    Get a key value from a config file.
    input
        configFile. string, the name of the config format file.
        sKey. string, the name of the key.
        resValue. string, the name of a string to store the returned value.
                make sure the char array of resValue is big enough。
    return 
        0, sKey is not found. Meanwhile, resValue is set "\0".
        1, sKey is found, and return the value.
*/
int GetConfigStr(char configFile[], char sKey[], char resValue[]);


#endif
