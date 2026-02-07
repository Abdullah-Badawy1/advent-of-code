#include "main.h"

class entity{
    string name;
public:
    entity(string s1) : name(s1){
        cout << "(created) entity spawned " << name << endl;
    }
    ~entity(){
        cout<<"(destroy) Entity vanished " << name <<endl;
    }

};

void heapp(int n){
   entity* rptr = new entity("hello");
   if (n == 1)  {
       delete rptr;
   }
}

int main (int argc, char *argv[]) {

    entity e1("abdullah");

    heapp(1);
    
    return 0;
}
