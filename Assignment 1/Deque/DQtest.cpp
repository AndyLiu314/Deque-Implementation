#include "Deque.h"
#include <iostream>
using namespace std;

bool test_reserve(){
    Deque<int> d;

}

int main( )
{

    Deque<int> d;
    int i = 6;
    /*
    d.enqueue(i);
    d.enqueue(i);
    d.eject();
    d.jump(i);
    d.dequeue();
    d.display(); 
    //d.jump(i);
    d.reserve(12); 
    d.display(); 
    d.jump(i);
    d.jump(i);
    d.enqueue(i);
    
    d.display(); 
    d.jump(i);
    d.jump(i);
    d.enqueue(i);
    d.display();
    d.ddisplay();
    d.clear();
    d.display();*/ 
    d.enqueue(i);
    d.enqueue(i);
    d.jump(i);
    //d.jump(i);
    d.display();

    //d.eject();
    //d.eject();
    d.enqueue(i);
    d.dequeue();
    //d.dequeue();
    d.display();

    d.reserve(12); 
    d.display();

    d.enqueue(i);
    d.jump(i);
    d.display();

    return 0;
}