#include <iostream>
#include <iomanip>

using namespace std;
/*


When we pass an array to a funtion it decays into what's known as a pointer. Hence the function no longer knows
the size of the array we are passing into it. And hence we have to explicitly define the size of the array here 
using the size variable for the function to use.

*/

double getTotal(double prices[], int size);

int main(){
    double prices[] = {5.45, 564 , 1.25 , 85.44};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices , size);
    cout << "\033[2J\033[1;1H";
    cout << "You total bill is ₹" << setprecision(2)<< fixed << total << endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total;
    for(int i = 0 ; i < size; i++){
        total += prices[i];
    }
    return total;
}
