#include <iostream>
#include "main.h"
using namespace std;

void initializeServer(int _numsVMs) 
{
    // Init Server
    

    // Create _numsVMs Virtual Machines
}

int main(int argc, char** argv) 
{
    if(argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <number_of_VMs>" << endl;
        exit(-1);
    }

    cout << "--------[ Init Server and VM ]--------" << endl;
    initializeServer(atoi(argv[1]));
    cout << "--------[ Private Net Started ]--------" << endl;

    cout << "--------[ Private Net Stopped ]--------" << endl;
    return 0;
}