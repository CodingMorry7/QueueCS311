//INSTRUCTION
//Look for ** to complete this program 
//The string output should match my hw1queueDemo.out 
//except for the trace messages

//=========================================================
//HW#: HW1P1 queue
//Your name: Chris Morikawa
//Complier:  g++
//File type: client program
//===========================================================

using namespace std;

#include <iostream>
#include <string>
#include "queue.h"

//Purpose of the program: To have the program start with a queue holding A, B and C. Remove the front element and 
// add to the queue three elements including the removed element + 'A', 'B', and 'C'. The program will continue
// until a Overflow. 
//Algorithm: Have the queue start with A, B and C. Remove the front element (add_el) and add it to
// A, B, and C to the end of the queue. Will be repeated until Overflow occurs.
//Local Variables: queue Q, string add_el;
//=============================================================================================
int main()
{
 queue Q;
 string add_el;// local variable of this .cpp 
 Q.add("A");//Add A,B,C to the Queue before.
 Q.add("B");
 Q.add("C");
  while (!Q.isEmpty())//Keep going until no more elements are in the queue.
    {
      try
	{
	 Q.remove(add_el);
	 cout << add_el << " " << endl; //display the removed string from the queue.
	 Q.add(add_el + "A");
	 Q.add(add_el + "B");
	 Q.add(add_el + "C");
	}//end of try
      //Cataches
	 catch(queue::Overflow)//If the queue has reached its limit, then it will split out this error.
	   {
		cerr << "Cannot add any more elements to the queue." << endl;
		return 0;
	   }
	 catch(queue::Underflow) // If there is not enough elements in the queue, then it will split out this error.
	   {
		cerr << "There is not enough elements in the queue." << endl;
		return 0;
	   }
      
    }//end of while
}//end of main.

