#include <iostream>
using namespace std;
  
struct position{
  int spot;
  position* next;
};

class line {
  private: // make sure these are : not ; 
    position* head;
  public:
    line(); // builder  
    void insert(int); 
    void deletefrombeg(int &); // pass by reference
    void search(int);
    void print();
};  

void line::insert(int data){

}

void line::deletefrombeg(int &x){
  //rules for deleting are mark for death, copy for printing in main, empty the node, update the pointer
  if (!head) {
    cout << "List is empty, cannot delete.\n";
    return;
  }
  position* temp = head;
  x = head->spot;
  head = head->next;
  delete temp;
}

int main () {
  line coffee;
  for (int i = 0; i < 10; i++) {
    coffee.insert(i+1);
  }

  int value;
  coffee.deletefrombeg(value);
  cout << "I just deleted pearl with color " << value << "\n";


}








