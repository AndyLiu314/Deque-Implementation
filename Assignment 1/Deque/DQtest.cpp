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

void test_enqueue_jump() {
    Deque<int> d;

    for (int i = 0; i < 8; i++){
        d.enqueue(i*2+1);
    }

    cout << "Enqueue 8 Elements into Deque\nExpected Output:" << endl; 
    cout << "Capacity = 8, Size = 8, Front Index = 0, Back Index = 0" << endl;
    cout << "[ 0=1, 1=3, 2=5, 3=7, 4=9, 5=11, 6=13, 7=15, ]" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.ddisplay(); 
    cout << endl;

    cout << "Enqueue Elements into Full Deque\nExpected Output:" << endl;
    d.enqueue(27);
    d.enqueue(35);
    d.enqueue(19);
    cout << "Capacity = 17, Size = 11, Front Index = 0, Back Index = 3" << endl;
    cout << "[ 0=1, 1=3, 2=5, 3=7, 4=9, 5=11, 6=13, 7=15, 8=27, 9=35, 10=19, 11=0, 12=0, 13=0, 14=0, 15=0, 16=0,]" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.ddisplay();
    d.clear();
    d.ddisplay();
    cout << endl;

    //cout << "Jump 8 Elements into Another Deque\nExpected Output:" << endl; 
    //cout << "Capacity = 8, Size = 8, Front Index = 0, Back Index = 0" << endl;
    //cout << "[ 0=1, 1=4, 2=7, 3=10, 4=13, 5=16, 6=19, 7=21, ]" << endl;
    //cout << endl;

    Deque<int> d1;
    //d1.jump(7);
    /*
    for (int m = 0; m < 8; m++){
        d1.jump(m*3+1);
    }*/

    cout << "Actual Output:" << endl;
    d1.display(); 
    cout << endl;
}

int main( ) 
{
    //test_reserve_clear(); 
    test_enqueue_jump();

    return 0;
}