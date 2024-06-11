#include <iostream> 
#include <ctime>

using namespace std;

int main(){
    //This projecct is a random number generator. using basially a pseudo-random method which is almost random but not completly random
    //This function below will generate a random number between 0 and 32767
    srand(time(NULL)); // Here the time is our Seed here.
    int num = (rand() % 6) + 1;  // This will only give the numbers between 1 to 6
    cout << num << endl;
    int sum = (rand() % 20) + 1; // For a polyhedral dice this will give numbers between 1 to 20
    cout << sum;
    return 0;
}