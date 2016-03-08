#include <iostream>

using namespace std;
int count1();

void hello()
{
    int i, j ;
    i = count1();

    cout << endl;
    cout << "Lets start!" << endl;
    cout << i << "\t" << count1() <<endl;
}
 int count1()
{
    static int _count =10;
    _count++;
   return _count;
}
