#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

void *ft_calloc(size_t count, size_t size) {
    size_t total_size = count * size; // Calcula el tamaño total en bytes

    // Asigna memoria con malloc
    void *ptr = malloc(total_size);

    if (ptr == NULL) {
        return NULL; // Si la asignación de memoria falla, devuelve NULL
    }

    // Limpia la memoria asignada con calloc
    // En C, la memoria asignada con malloc no está inicializada, por lo que necesitamos limpiarla manualmente
    // Podríamos usar memset para esto, pero es más eficiente asignar con calloc que limpia automáticamente la memoria
    // calloc asigna y limpia la memoria de manera más eficiente que malloc seguido de memset
    for (size_t i = 0; i < total_size; i++) {
        *((char *)ptr + i) = 0;
    }

    return ptr;
}

int main() {
    size_t count, size;

    printf("Ingrese el número de elementos: ");
    scanf("%zu", &count);

    printf("Ingrese el tamaño de cada elemento: ");
    scanf("%zu", &size);

    // Llama a ft_calloc para asignar memoria
    void *ptr = ft_calloc(count, size);

    if (ptr == NULL) {
        printf("La asignación de memoria ha fallado.\n");
    } else {
        printf("La asignación de memoria fue exitosa.\n");
        // Liberar la memoria asignada
        free(ptr);
    }

    return 0;
}
