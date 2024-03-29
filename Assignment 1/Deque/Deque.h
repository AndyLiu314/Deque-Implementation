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

    Object & operator[]( int index )
    {
        int num = (index+front)%theCapacity;
        return objects[ num ];
    }

    const Object & operator[]( int index ) const
    {
        int num = (index+front)%theCapacity;
        return objects[ index ];
    }

    void clear( ){
        objects = new Object[ theCapacity ]; 
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

        //if the front header has not been moved objects can be copied left to right into the new deque
        if (front == 0){
          
          for (int i = 0; i < theSize; i++) {
            newDeque[i] = objects[i];
          }
          front = 0;
          back = theSize;
        }

        //otherwise, all elements that have been looped around will be copied into the new array first
        //they will then be followed by the elements inserted from the back
        else if (front>0){
          int NDindex = 0;
          for (int k = front; k<theCapacity; k++){
            newDeque[NDindex] = objects[k]; 
            NDindex++;
          }

          for (int m = 0; m < back; m++){
            newDeque[NDindex] = objects[m]; 
            NDindex++;
          }

          front = 0;
          back = NDindex;
        }
       
        Object* temp = objects; 
        objects = newDeque;
        delete [] temp;
        theCapacity = newCapacity;

      } else {
        cout<<"New capacity must be greater than original capacity"<< endl;
      }
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

        if (theSize==0){
          objects[front] = x;
          front = theCapacity - 1;
          back++;
          theSize++;
        } else if (front<1){
          front = theCapacity- 1;
          objects[front] = x;
          theSize++;
        } else {
          front--;
          objects[front] = x;
          theSize++;
        }
        
        // Implement this 
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        objects[front] = 0;
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
      if (back < 1){
        Object temp = objects[back];
        back = theCapacity-1;
        objects[back] = 0;
        theSize--;
        if (theSize<0){
          theSize = 0;
        }
        return temp; 

      } else {
        Object temp = objects[back];
        back--;
        objects[back] = 0;
        theSize--;
        if (theSize<0){
          theSize = 0;
        }
        return temp; 
      }
        // Implement this 
    }

    void display() const // print out the contents of the deque
    {
        cout << "Size = " << theSize << std::endl;

        cout << "< " ;
        for (int i =0; i<theCapacity; ++i){
          cout<<i<<"="<<objects[i]<<", ";
        }
        cout<<">"<<endl;
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
      cout << "Capacity = " << theCapacity << ", Size = " << theSize; 
      cout << ", Front Index = " << front << ", Back Index = " << back << std::endl;
      cout << "[ " ;
      for( int i = 0; i < theCapacity ; ++i ){
         cout << i << "=" << objects[i] << ", " ;
      }
      cout << "]" << endl;
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
