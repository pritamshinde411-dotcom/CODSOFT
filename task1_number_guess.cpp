#include <iostream>
#include <cstdlib>
#include<ctime>
  using namespace std;
      int main() {
     int number,guess;

      srand(time(0));
      number = rand()%100 + 1;
      cout<<" Guess the number between 1 and 100" <<endl;
      do {
          cout<<"enter your guess:";
          cin>>guess;

        if(guess > number)
           cout<<"Too high!" <<endl;
           else if(guess < number)
               cout<<"Too low!" <<endl;
           else
               cout<<"correct ! you guessed the number."<<endl;
      }
        while (guess !=number);
       return 0;
}
