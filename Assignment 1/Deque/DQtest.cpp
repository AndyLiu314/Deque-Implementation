#include "Deque.h"
#include <iostream>
using namespace std;

void test_reserve_clear(){
    Deque<int> d;
    int i = 13;
    int e = 12;

    //increase capacity to 13
    cout << "Increasing Deque Size By: " << i << "\nExpected Output:\nsize=0" << endl; 
    cout << "< 0=0, 1=0, 2=0, 3=0, 4=0, 5=0, 6=0, 7=0, 8=0, 9=0, 10=0, 11=0, 12=0, >" << endl;
    d.reserve(i); 
    cout << endl;

    cout << "Actual Output:" << endl;
    d.display(); 
    cout << endl;

    cout << "Attempting to Decrease Size By: " << e << "\nExpected Output:" << endl; 
    cout<<"New capacity must be greater than original capacity\nsize=0"<< endl;
    cout << "< 0=0, 1=0, 2=0, 3=0, 4=0, 5=0, 6=0, 7=0, 8=0, 9=0, 10=0, 11=0, 12=0, >" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.reserve(e);
    d.display(); 
    cout << endl;

    cout << "Clearing Deque:\nExpected Output:" << endl; 
    cout << "Capacity = 8, Size = 0, Front Index = 0, Back Index = 0" << endl;
    cout << "[ 0=0, 1=0, 2=0, 3=0, 4=0, 5=0, 6=0, 7=0, ]" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.clear();
    d.ddisplay();
    cout << endl;
}

void test_enqueue_jump(){
    Deque<int> d;

    int i;
    //int m = 0;
    for (i = 0; i < d.size(); i++){
        d.enqueue(i+4);
    }
    cout << "Enqueue: " << i << "Elements into Deque\nExpected Output:" << endl; 
    cout << "[ 0=0, 1=0, 2=0, 3=0, 4=0, 5=0, 6=0, 7=0, ]" << endl;
}

int main( )
{
    test_reserve_clear(); 

    Deque<int> d;
    int i = 6;

    return 0;
}