#include <iostream>
using namespace std;

struct st{
  int id;
  int gpa;
  st *next;
};

bool searchfornum(st *cu, int key ) {
  while (cu != nullptr) {
    if (cu->gpa == key){
      cout << cu->id;
    }
  }
}

int main () {
  st *p = new st;
  st *head = p;
  for (int i; i < 3; i++){
    p->id=rand()%1000;
    p->gpa = 1+rand()%4;
    p->next = nullptr;
    cout << "current node:" << i << endl;
    cout << "current id:" << p->id << endl;
    cout << "current gpa:" << p->gpa << endl;

    p = p->next;
    p = new st;
  }

  p->id = 3;
  p->gpa=2.7;
  p->next=nullptr;

  return 0;
};