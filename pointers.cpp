// my first pointer
#include <iostream>
using namespace std;

/*this program assigns values to variables through pointers */

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer = NULL;

  cout << mypointer << endl;
  
  if(mypointer == NULL)
    {
      cout << "This is a null pointer" << endl;
    }
  
  mypointer = &firstvalue;
  cout << "This is the adress of the first value " << mypointer << endl;
  
  *mypointer = 10;
  cout << "I am displaying the value at the address of the first value" << (*mypointer) << endl;
  
  mypointer = &secondvalue;
  cout << "This is the adress of the second value " << mypointer << endl;
  
  *mypointer = 20;
  cout << "I am displaying the value at the address of the first value" << (*mypointer) << endl;
  
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
