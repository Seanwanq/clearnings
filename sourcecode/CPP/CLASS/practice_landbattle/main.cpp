#include <iostream>
#include "LandOwner.h"

using namespace std;

int main()
{
    LandOwner* ptr_landowner1 = new LandOwner();
    LandOwner* ptr_landowner2 = new LandOwner("Dio");
    LandOwner* ptr_landowner3 = new LandOwner("JOJO", "male", 10000, 10000);

    ptr_landowner1->ShowInfo();
    
    ptr_landowner2->ShowInfo();
    ptr_landowner3->ShowInfo();


    ptr_landowner2->TouchCard(2);


    delete ptr_landowner1;
    delete ptr_landowner2;
    delete ptr_landowner3;

    return 0;
}

//TODO 看到15.7 44:48