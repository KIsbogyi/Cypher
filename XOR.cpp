#include <iostream>
#include <cstring>

using namespace std;

const char* XOR(const char *text,char key){     //TODO char is temporyry i will write it over with const char * in the future
    char *ct = new char[strlen(text)+1];    
    for(int i = 0; i < strlen(text); i++){
            char a = text[i] ^ key;
            ct[i] = a;
        }
        return ct;
}

int main(void){
    cout << XOR("Alma", 'T') <<  endl;
    cout << XOR(XOR("Alma", 'T'), 'T') << endl;

}
