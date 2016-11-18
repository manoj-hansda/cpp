#ifndef FUNC_H
#define FUNC_H

char * getPin();
bool checkPin(char *pin);
bool authenticate(Customer co, char *p);
void showMenu();
int getChoice();
void withdraw();
void balanceInquiry();
void miniStatement();
void transfer();

#endif
