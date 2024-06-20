#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    srand((unsigned int) time(NULL));//this function used for take random number
    int ramdom_no=(rand()%100)+1;//take single number between 1 to 100
    int user_no=0;
    cout<<"Welcome to Number guessing number...."<<endl;
    cout<<"I have selected random number between 1 to 100"<<endl;
    cout<<"can guess what the number is?"<<endl;
    while(user_no!= ramdom_no) {
        cout << "Enter your guess: ";
        cin >> user_no;
        
        if (user_no > ramdom_no) {
            cout << "Too high! Try again." <<endl;
        } else if (user_no < ramdom_no) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "You guessed the correct number!!!" <<endl;
        }
    }
    return 0;
}
    