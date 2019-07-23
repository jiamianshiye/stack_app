#include <iostream>
#include "mystack.h"
#include "number_mode.h"
    
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    cout << argv[1] << endl;
    num_to_hex(atoi(argv[1]));
    return 0;
}
