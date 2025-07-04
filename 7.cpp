#include<iostream>
using namespace std;

int main()
{
    for(int i =0;i<=50;i++){
          if(i%3==0 && i%5==0){
            cout << "FizzBuzz" << endl;
          }
          else if (i%5==0){
            cout << "Buzz" <<endl;
          }
          else if(i%3==0){
            cout << "Fizz" <<endl;
          }
          else {
            cout << "None" << endl;
          }
    }

return 0;
}
