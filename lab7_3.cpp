#include<iostream>
using namespace std;

char before(char x){
if(x=='A') return 'Z';
return  (x>='A' and x<='Z')?  x-1 :  '0';
}