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
    cout << "Capacity = 17, Size = 11, Front Index = 0, Back Index = 11" << endl;
    cout << "[ 0=1, 1=3, 2=5, 3=7, 4=9, 5=11, 6=13, 7=15, 8=27, 9=35, 10=19, 11=0, 12=0, 13=0, 14=0, 15=0, 16=0,]" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.ddisplay();
    cout << endl;

    cout << "Jumping Elements into Deque\nExpected Output:" << endl;
    d.jump(3);
    d.jump(6);
    d.jump(4);
    d.jump(4);
    cout << "Capacity = 17, Size = 15, Front Index = 13, Back Index = 11" << endl;
    cout << "[ 0=1, 1=3, 2=5, 3=7, 4=9, 5=11, 6=13, 7=15, 8=27, 9=35, 10=19, 11=0, 12=0, 13=4, 14=4, 15=6, 16=3,]" << endl;
    cout << endl;

    cout << "Actual Output:" << endl;
    d.ddisplay();
    cout << endl;

    cout << "Jumping Elements into Full Deque\nExpected Output:" << endl;
    cout << "Capacity = 35, Size = 19, Front Index = 34, Back Index = 18" << endl;
    cout << "[ 0=87, 1=98, 2=4, 3=4, 4=6, 5=3, 6=1, 7=3, 8=5, 9=7, 10=9, 11=11, 12=13, 13=15, 14=27, 15=35, 16=19, 17=37, 18=0, 19=0, 20=0, 21=0, 22=0, 23=0, 24=0, 25=0, 26=0, 27=0, 28=0, 29=0, 30=0, 31=0, 32=0, 33=0, 34=4121212, ]" << endl;
    d.jump(98);
    d.jump(87);
    d.jump(4121212);
    d.enqueue(37); 
    cout << endl;

    cout << "Actual Output:" << endl;
    d.ddisplay();
    cout << endl;

    cout << "Clearing:" << endl;
    d.clear();
    d.ddisplay();
    cout << endl;
}

void test_eject_dequeue () {
    
}

int main( ) 
{
    //test_reserve_clear(); 
    test_enqueue_jump();
    /*
    Deque<int> d;
    d.jump(3);
    d.display();
    Deque<int> v;
    v.ddisplay();*/

    return 0;
}