#include "Deque.h"
#include <iostream>
using namespace std;

int main( )
{
    Deque<int> d;
    for (int i = 0; i<4; i++){
        d.enqueue(i+3);
    }
    d.ddisplay();
    
    cout<<"Expected Output: 6"<<endl;
    cout<<"Actual Output: " << d[3] <<endl;
    return 0;
}