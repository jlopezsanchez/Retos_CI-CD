#include <stdio.h>
#include <assert.h>

//test mi_strlen
size_t mi_strlen(const char *s);

void test_mi_strlen(){
    assert(mi_strlen("") == 0);
    assert(mi_strlen("hello") == 5);
    assert(mi_strlen("Ciberseguridad") == 14);
}


//test mi_strcmp
int mi_strcmp(const char *s1, const char *s2);
void test_mi_strcmp(){
    assert(mi_strcmp("abc", "abc") == 0);
    assert(mi_strcmp("abc", "abcd") < 0);
    assert(mi_strcmp("abcd", "abc") > 0);
}


//test mi_strcpy
char *mi_strcpy(char *dest, const char *src);
void test_mi_strcpy(){
    char dest1[20];
    assert(mi_strcpy(dest1, "hello") == dest1);
    assert(mi_strcmp(dest1, "hello") == 0);

    char dest2[20];
    assert(mi_strcpy(dest2, "") == dest2);
    assert(mi_strcmp(dest2, "") == 0);
}

int main() {
    test_mi_strlen();
    test_mi_strcmp();
    test_mi_strcpy();
    printf("All tests passed!\n");
    return 0;
}