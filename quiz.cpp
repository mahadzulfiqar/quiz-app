#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "Welcome to the Quiz!\n\n";

    cout << "1. What is the capital of Pakistan?\n";
    cout << "a) Lahore\nb) Karachi\nc) Islamabad\nd) Peshawar\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Islamabad.\n\n";
    }

    cout << "2. Who developed C++?\n";
    cout << "a) Bjarne Stroustrup\nb) James Gosling\nc) Dennis Ritchie\nd) Guido van Rossum\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Bjarne Stroustrup.\n\n";
    }

    cout << "Your final score is: " << score << "/2\n";
    return 0;
}
