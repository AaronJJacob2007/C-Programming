#include <stdio.h>

int main() {
    char c;
    scanf(" %c",&c);
    ((c>='A'&&c<='Z')||(c>='a'&&c<='z')) ?
    (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
     c=='A'||c=='E'||c=='I'||c=='O'||c=='U' ?
     printf("Vowel") : printf("Consonant"))
    : printf("Not alphabet");
    return 0;
}
