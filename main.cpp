#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;


int main() {

    const int spins = 10; // change this number for # of spins
    const int minValue = 1;
    const int maxValue = 10; // HAS TO BE BIGGER THEN "spins"
    int numbers[spins] = {}; // makes array w number of spins

    srand(time(nullptr)); // time between now and jan 1 1970

    for ( int i = 0; i < spins; i++ ){ // you declare a var called i and set it to 0, 'i < spin' is the condition for the loop to run. i++ is the code that the for loop should run at the end of each ittoration/time it restarts the code <3.
        numbers[i] = (rand() % (maxValue - minValue + 1));
    }
    for(int x = 0; x < spins; x++){ // for every value in numbers, if value in numbers, it rerolls.
        for(int y = 0; y < spins; y++){ // look above.
            if(numbers[x] == numbers[y] && x != y){ // if numbers are equal but its not the same element/section of array then reroll
                numbers[x] = (rand() % (maxValue - minValue + 1));
                x =- 1; // goes back an ittoration on the 1st for loop.
            }
        }
    }
    string intro = "Here are your lotto number rolls: ";

    cout << intro << endl;
        for(int i = 0; i < spins; i++){    
            cout << numbers[i] << endl;
        } 

    return 0;
}
