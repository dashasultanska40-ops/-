
#include <iostream>
using namespace std;

int main()
{
     double N;
   cout<<"Enter a number N: ";
   cin >> N;
     
   cout << static_cast<int>(N) % 60 << endl;
    return 0;
}
