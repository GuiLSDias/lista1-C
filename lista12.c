#include <stdio.h>
#include <string.h>

int main() {
    char m[1001];
    gets(m); 
    int comprimento = strlen(m), i;
    for (i = 0; i < comprimento; i++) {
        if (m[i] == 'p' || m[i] == 'P') {
            i++;
        }
        printf("%c", m[i]);
    }
    return 0;
}

