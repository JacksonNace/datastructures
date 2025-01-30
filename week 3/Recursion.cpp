#include <iostream>
using namespace std;
// jan 30 
//https://onecompiler.com/users/42r2gd7jn/codes
int factorial(int x);
// recursion works by going one way then back up. 4 3 2 1 2 3 4
// 1 2 3 4 3 2 1
// 3 conditions for using recursion

// is there repition
// wheres our stop? condition to stop
// which argument to change

// dont use for loop factorial or recursively
// recursively is IF ELSE



//print function to print linked list recursively WILL be on the test
struct ll{
  int value;
  ll *next;
};


//extra_1_5_2 cout, print, search recursively

class functions {
  private:
    ll *head;
  public:
    void print();
    void count(); // write recursive function to count # of nodes in LL
    void search(); // while loop, if true or if false else keep searching
};

void print(ll *cu){
  // cu = head;
  //   while (cu->next != 0){
  //     cout << cu-value;
  //     cu=cu->next;
  //   }
  // this is not recursive, it does not call itself
  cu = head;
  if (cu->next == null){
    cout << cu->value << "\n";
  } else {
    // cout << cu-> value; // print before will print prior to recursive function, so as it gets closer
    cout << (cu-next) << "\n";
    cout << cu->value; // printing afterwards will print most recent to oldest outputs executed
  }
  cout << "";
  return;
}

int main () {

  return 0;
}





