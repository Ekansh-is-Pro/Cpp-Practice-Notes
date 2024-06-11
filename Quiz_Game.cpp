#include <iostream>

using namespace std;

int main(){
    string questions[] = {"1. What years was C++ created?",
                          "2. Who invented C++?",
                          "3. What is the predecessor of C++?",
                          "4. Is the Earth Flat?"};
    string options[][4] = {{"A. 1969","B. 1975","C. 1985","D. 1989"},
                           {"A. Me","B. Guido Van Rossum","C. Bjarne Stroustrup","D. John Carmack"},
                           {"A. Python","B. Rust ","C. C","D. Rust"},
                           {"A. Yes","B. No ","C. Can't Say","D. IDK"}};
    char answerKey[] = {'C','C','C','B'};
    int size =  sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    cout << "\033[2J\033[1;1H";
    for(int i = 0; i < size; i++){
        cout << "********************************************" << endl;
        cout << questions[i] << '\n';
        cout << "********************************************" << endl;
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            cout << "Correct Good one!" << endl;
            score++;
        }
        else{
            cout << "WRONG BOZO!"<< endl;
            cout << "Correct answer is : " << answerKey[i] << endl;
            score--;
        }
    }
    cout << "\033[2J\033[1;1H";
    cout << "********************************************" << endl;
    cout << "*                RESULTS                   *" << endl;
    cout << "********************************************" << endl;
    cout << "Correct Guesses : " << score << endl;
    cout << "Number of Questions : " << size << endl;
    cout << "Score : " << (score/(double)size) * 100 << "%" << endl;
    //                           typecast            
    //This is done so we can hold the decimal value properly else we get 0 as the 
    // result of this divsion.
    return 0;
}