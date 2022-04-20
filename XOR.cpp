#include <iostream>

/*
class XOR{
    char *key;
    char *cyphertext

    public:
        XOR(){}
};
*/


int stringtoint(const char* str){
    int tmp = str[0];
    for(int i = 1; i < strlen(str); i++){
        tmp*100;
        tmp += str[i];
    }
    return tmp;

}

char * XOR(const char *key, const char* text){
    return key ^ text;

}