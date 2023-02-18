int mx_strlen(const char *s);

void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int size = mx_strlen(s) - 1;
    
    if (s)
        for (int i = 0; i <= size / 2; i++)
            mx_swap_char(&s[i], &s[size - i]);
}
