
#include <iostream>
using namespace std;

int main()
{
     double N;
   cout<<"Enter N: ";
   cin >> N;
  

  // Приведення типу в стилі C
    //int N = (int)N; //
    
   cout << static_cast<int>(N) % 60 <<endl;
    return 0;
}