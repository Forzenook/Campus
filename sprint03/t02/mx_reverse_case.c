#include <stdbool.h>

bool mx_islower(int c);

bool mx_isupper(int c);

int mx_tolower(int c);

int mx_toupper(int c);

void mx_reverse_case(char *s) {
int m = 0;

while (s[m]) {
if (mx_islower(s[m])) {
s[m] = mx_toupper(s[m]);
}
else if (mx_isupper(s[m])) {
s[m] = mx_tolower(s[m]);
}
m++;
}
}
