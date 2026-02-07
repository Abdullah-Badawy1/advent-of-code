#include "main.h"

class texbuffer{
public:
    char* data;
    int lenght;

    texbuffer(const char* s1){
        s1 = new char; 
        data = s1;
    }
    ~texbuffer(){

    }
}



int main (int argc, char *argv[]) {
    texbuffer tex1("Hello again")
    
    return 0;
}
