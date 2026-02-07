#include "main.h"

class color{
private:
    float r, g, b, a;
public:
    color(float red, float green, float blue, float alpha)
        : r(red), g(green), b(blue), a(alpha){}
    float getred() const{
        return(r);
    }
    float getgreen() const{
        return(g);
    }
    float getblue()const{
        return(b);
    }
    float getalpha() const{
        return(a);
    }
};

void printc(const color& c){
    cout<<c.getblue()<<endl;
}

int main(int argc, char *argv[]) {
    color co1(13.0, 14.0, 15.0, 16.0);
    printc(co1);
    // const color& a = co1;

    cout<<co1.getred()<<endl;
    cout<<co1.getblue()<<endl;
    cout<<co1.getgreen()<<endl;
    cout<<co1.getalpha()<<endl;
    return 0;
}
