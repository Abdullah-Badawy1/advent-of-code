#include "main.h"

class Thermostat {
private:
    double celsius;
public:
    Thermostat(double c1){
        setTem(c1);
    }
    void setTem(double tempC){
        // celsius = tempC;
        if (tempC < 0) 
            celsius = -274.15;
        if (tempC > 0)
            celsius = tempC;
    }

    double getTem() const{
        return celsius;}

    double getTF() const{
        double F = (celsius * 1.8) + 32;
        return (F);
    }

    double getTK() const{
        double K = celsius + 273.15;
        return (K);
    }

};
int main (int argc, char *argv[]) {
     Thermostat T1(-44);
     cout<<T1.getTem()<<endl;
     T1.setTem(14.0);
     cout<<T1.getTem()<<endl;
     cout<<T1.getTF()<<endl;
     cout <<T1.getTK()<<endl;
    return (0);
}
