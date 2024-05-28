 

#include <iostream>
#include "Boss.h"
#include "Designer.h"
#include "Programmer.h"
using namespace std;
void main()

{
    Programmer p("Vasya");
    Designer d("Petya");
    Boss b("Umnik");

    b.printInfo();
    d.printInfo();
    p.printInfo();
}

