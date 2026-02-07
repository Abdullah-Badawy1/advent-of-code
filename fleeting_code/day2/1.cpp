#include "header.h"

int main (int argc, char *argv[]) { 
    int a = 7;
 
    printByValue(a);                 
    printByLvalueRef(a);             
    printByConstLvalueRef(a);        
    printByConstLvalueRef(20);       
    printByRvalueRef(30);            
    printByRvalueRef(7);  

    cout<<"============================="<<endl;

    unique_ptr<int> x = makeUniqueInt(5);
    shared_ptr<int> y = makeSharedInt(10);

    cout << "unique " << *x << endl;
    cout << "shared " << *y << endl;

    unique_ptr<double[]> arr = makeUniqueDoubleArray(3, 2.5);

    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    } cout<<endl;

    return 0;
}
