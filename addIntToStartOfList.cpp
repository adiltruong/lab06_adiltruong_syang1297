//addIntToEndOfList.cpp
//Date: February 22, 2017
//Authors: A Truong & S Yang
//addIntToEndOfList.cpp takes an integer and adds it to the end of a linked list

#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main () {

struct Node {
  int data;
  Node *next;
};

Node n1;
n1*data= 10;
n1*next= NULL;

Node * head= new Node;
head-> data= 20;
head-> next= NULL;
