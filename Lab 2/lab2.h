#include <iostream>
using namespace std; 

char printMenu();
void printInventory(int l, int m, int s); 
void orderInventory(int& l, int& m, int& s); 
void fillOrder(int& l, int& m, int& s, int& o);
float shippingCost(int o); 
void printReceipt(int l, int m, int s, int order, int o);