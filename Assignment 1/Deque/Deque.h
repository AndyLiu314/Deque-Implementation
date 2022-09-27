#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <typename Object>
class Deque 
{
  public:
    Deque()
      {  
         theCapacity = 8 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         front = 0 ; 
         back = 0 ; 
      }
      
    ~Deque( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }

    void clear( ){
        delete[] objects;
        theCapacity = 8;
        theSize = 0 ;
        front = 0 ; 
        back = 0 ; 
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this...
    }

    void reserve( int newCapacity )
    {
      if (newCapacity > theCapacity){
        
        Object* newDeque = new Object[newCapacity];
        int oldLength = theSize; 
        cout<<"old length is: "<<oldLength<<endl;

        int elementsaftertail = theCapacity-back;
        int k = 0;
        for (int i = back; i<theCapacity; i++){
          newDeque[k] = objects[i];
          k++;
        }

        int NDindex = k;
        for (int m=0; m<k; m++){
          newDeque[NDindex] = objects[m];
          NDindex++;
        }

        front = 0;
        back = oldLength;


        /* transfers the old elements to new array 
        must split the old array into 2 sections because there is a front and a back pointer
        for ()
        {

        } 
        */ 
       
        Object* temp = objects; 
        objects = newDeque;
        delete [] temp;
        theCapacity = newCapacity;

      } else {
        cout<<"New capacity must be greater than original capacity"<< endl;
      }
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...
    }

    // Operations 

    void enqueue( const Object & x )// Insert a new object at the back 
    {
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
        objects[ back ] = x ; 
        back = (back+1) % theCapacity ;
        theSize++ ;
    }

    void jump( const Object & x )// Insert a new object at the front 
    {
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
        objects[front] = x;
        if (front<1){
          front = theCapacity- 1;
          theSize++;
        } else {
          front--;
          theSize++;
        }
        
        // Implement this 
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
      if (empty()){
        cout<<"Deque is empty"<<endl;
        return NULL;
      }

      theSize--;
      Object temp = objects[back];

      if (back < 1){
        back = theCapacity-1;
      } else {
        back--;
      }

      return temp; 
        // Implement this 
    }

    void display() const // print out the contents of the deque
    {
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
        // Implement this.  The output should be in the style used in 
        // Vector and Stack classes provided.
    }


  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object * objects;
};

#endif
