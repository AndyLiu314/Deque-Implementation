#include "Deque.h"
#include <iostream>
using namespace std;


int main( )
{
    //cout<<"this works"<<endl;
    //cout<<"this works"<<endl;
    
    /*
    int k =0;
    for (k=k; k<5;k++){
        cout<<"this works"<<endl;
        cout<<k<<endl;
    }
    cout<<k<<endl;*/

    Deque<int> d;
    int i = 6;
    d.enqueue(i);
    d.enqueue(i);
    d.jump(i);
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
    d.display();
    return 0;
}