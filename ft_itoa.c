
#include "libft.h"
//#include <stdlib.h> // Para malloc

char *ft_itoa(int n) {
    int len = 0;
    int temp = n;
    
    // Contar la cantidad de dígitos
    if (temp <= 0) {
        len = 1; // Para el signo negativo o el 0
    }
    while (temp != 0) {
        len++;
        temp /= 10;
    }

    // Asignar memoria para la cadena y el carácter nulo
    char *str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL) {
        return NULL; // Si la asignación de memoria falla
    }

    // Incluir el signo si es negativo
    if (n < 0) {
        str[0] = '-';
        n = -n;
    }

    // Convertir los dígitos a caracteres
    str[len] = '\0';
    for (int i = len - 1; i >= (str[0] == '-' ? 1 : 0); i--) {
        str[i] = (n % 10) + '0';
        n /= 10;
    }

    return str;
}

/*
int main() {
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    char *str = ft_itoa(num);

    if (str == NULL) {
        printf("Error: Fallo en la asignación de memoria.\n");
        return 1;
    }

    printf("La representación de cadena de %d es: %s\n", num, str);

    free(str);

    return 0;
}*/
