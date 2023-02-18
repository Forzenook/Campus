#include <stdbool.h>

double mx_pow(double, unsigned int);

bool mx_is_narcissistic(int num) {
int count = 0, rem, sum = 0, temp, store;
     
temp = num;
store = num;

while(num != 0) {
num /= 10;
count++;
}
while(store != 0) { 
rem = store % 10;
sum += mx_pow(rem,count);
store /= 10;
}
if(sum == temp) {
return true;
}
else {
return false;
}   
}
