/* This node class is used to build drop lists for the
 * string_set class.
 *
 * Jack Machara
 * U1053556
 * Assignment 3
 * September 28, 2020
 *
 * 
 */

// Guard against double inclusion

#ifndef NODE_H
#define NODE_H


#include <string>
#include <vector>

namespace cs3505
{
  /* Node class for holding elements. */

    /* Note:  Do not alter the next line of code.  My tester will 
   * re-write the 'class node' to 'class node : private auditor' 
   * so that it inherits from my auditing class (harmlessly). 
   */

  class node
  {
    friend class string_set;   // This allows functions in string_set access
 
    private:
    //node constructors and destructor
	  node(const std::string & value);  //max_size sets the size of the next nodes, 
	  ~node();
    //Vector of node pointers and a string to hold data
  	std::vector<node*> next_nodes;
    std::string data;

  };
}
		
#endif 