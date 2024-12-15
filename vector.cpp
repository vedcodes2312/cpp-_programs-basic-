// vector in c++

#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    //declare a vector of integers
    vector<int> vect;

    //vector elements
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);

    cout << "elements in vector are: ";
    for (int i = 0; i < vect.size(); i++)
   {
      cout<< vect[i] << " ";
   }
   cout << endl;
   cout << "using range based for loop: ";
   for (int element : vect)
   {
    cout << element << " ";
   }
   return 0;
   }
    

/* In C++, a vector is a dynamic array provided by the Standard Template Library (STL). 
It can grow and shrink in size dynamically, allowing for flexible and efficient handling of a s
equence of elements. Vectors manage memory automatically, making it easier to work with collections
 of data without worrying about manual memory management.

Here are some key features of std::vector:

Dynamic Size: Vectors can resize automatically as elements are added or removed.

Random Access: You can access elements using the [] operator or the at() method, providing fast access to any element.

Automatic Memory Management: Vectors handle their own memory, so you don't need to manually allocate and deallocate memory.

Standard Functions: Vectors come with a variety of useful functions for manipulating the elements, 
such as push_back(), pop_back(), size(), clear(), and many more.    */

