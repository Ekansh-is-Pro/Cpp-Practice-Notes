#include <iostream>

/*
Namespace : provides a solution for preventing name conflicts in large projects. Each entity needs a unique name
            A namespace allows for identiccally name entities as long as the  namespac are different.
*/
using namespace std;

namespace mynamespace{
    int x = 1;
}

namespace mynamespace2{
    int x = 2;
}

/*
NOTE : Unless we mention which namespace we are using the function will use the local namespace supplied to it.
*/

int main(){
    int x = 0;
    // but we can't declare x = 1 again here hence we use namespace
    cout << x << endl;
    cout << mynamespace::x << endl;
    cout << mynamespace2::x << endl;
}