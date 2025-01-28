#include <iostream> //MEMORIZE AND REPEAT FOR EXAM1
using namespace std;
struct pearl {
  int color;
  pearl*hole;
};

class necklace {
  private: 
    pearl *head;

  public: 
    necklace();
    void insert(int); // ln 4 of struct int color; // pass by value
    void deletefrombeg(int &); // pass by reference
    void search(int);
    void print();
    // insert delete search and print and the basic necklace() are ABC's of linkedlist
};

void deletefrombeg(pearl *cu, int &x) { 
  // rules for deleting: 
  // mark node for death, copy color for main printing, empty, update
  //node
  pearl *temp = cu; //mark head for death
  x=cu->color; // save color to communicate through main what was deleted cout << color << "was deleted; 
  cu = cu->hole; // new head
  delete temp; // free the memory
}

int main () {
  necklace birthday;
  birthday.insert(1);
  birthday.insert(2);
  birthday.insert(3);
  birthday.insert(4);
  birthday.insert(5);
  birthday.insert(6);
  birthday.insert(7);
  birthday.insert(8);
  birthday.insert(9);
  birthday.insert(10);
  birthday.insert(11);

  int value;
  birthday.deletefrombeg(value);
  cout << "I just deleted pearl with color " << value << "\n";
  return 0;
}