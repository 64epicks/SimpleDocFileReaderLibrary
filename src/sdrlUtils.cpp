#include <SDRL.h>
#include <SDRL/stdincludes.h>

using namespace std;

void SDRL::printD(string inputData)
{
    if(SDRL::debugMode)
    {
        cout << inputData << endl;
    }
}
void SDRL::printD(char* inputData)
{
    if(SDRL::debugMode)
    {
        cout << inputData << endl;
    }
}