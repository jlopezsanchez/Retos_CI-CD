#include "starter.h"
#include <stdio.h>
#include <assert.h>

// Declaración de funciones de prueba
// void test_suma(void);

void test_suma(void) {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(0, 0) == 0);
    
    printf("test_suma() OK\n");
}

int main(void) {
    printf("Ejecutando pruebas de challenge01...\n");

    test_suma();
    printf("✅ Todas las pruebas han pasado correctamente.\n");
    return 0;

    
}
