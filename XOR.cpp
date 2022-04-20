#include <iostream>
int stringtoint(const char* str){
    int tmp = str[0];
    for(int i = 1; i < strlen(str); i++){
        tmp*100;
        tmp += str[i];
    }
    return tmp;

}
char * inttostring(int number){
    char *tmp = new char[0]
    while(number != 0){
        char *temp;
        strcat(temp, tmp);
        delete[] tmp;
        char *tmp = new char[strlen(temp)+2]
        strcat(tmp, number % 100);
        number = number/100;
    }
    char *ret;
    strcat(ret, tmp);
    delete[] tmp;
    return ret;
}


char * XOR(const char *key, const char* text){
    return stringtoint(key) ^ stringtoint(text);
}