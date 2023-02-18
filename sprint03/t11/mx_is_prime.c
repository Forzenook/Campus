#include<stdbool.h>

bool mx_is_prime(int num) {
int i, c = 0;

for (i = 1; i <= num; i++) {
if (num % i == 0) {
c++;
}
}
if (c == 2) {
return true;
}
else {
return false;
}
}
