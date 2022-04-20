#include <iostream>
#include <cstring>

using namespace std;



const char* XOR(const char *text,const char *key){     //TODO char is temporyry i will write it over with const char * in the future
    char *ct = new char[strlen(text)+1];
    int i = 0;
    int j = 0;

    while(*text != '\0'){
        ct[j] = text[0] ^ key[i];
        text ++;
        i++, j++;
        if(key[i] == '\0'){
            i = 0;
        }
    }
    /*
    for(int i = 0; i < strlen(text); i++){
            char a = text[i] ^ key;
:!g++ XOR.cpp -o test && ./test
            ct[i] = a;
        }
        */
        return ct;
}

int main(void){
    //cout << XOR("Alma", 'T') <<  endl;
    //cout << XOR(XOR("Alma", 'T'), 'T') << endl;
    cout << XOR(XOR("Alma", "K"), "K") << "|" << endl;

}
