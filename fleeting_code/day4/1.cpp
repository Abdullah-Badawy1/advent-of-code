#include "main.h"

struct Vec3 {
    float x;
    float y;
    float z;


    Vec3(){
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;}

    Vec3(float a, float b, float c){
        x = a;
        y = b;
        z = c;
    }

};
int main (int argc, char *argv[]) {
    Vec3 a1;
    cout<<a1.x<<endl;
    cout<<a1.y<<endl;
    cout<<a1.z<<endl;

    Vec3 b1(19.0, 18.0, 19.0);
    cout<<b1.x<<endl;
    cout<<b1.y<<endl;
    cout<<b1.z<<endl;
    return 0;
}
