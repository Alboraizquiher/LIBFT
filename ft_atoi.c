#include <stdio.h>

int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1; // Inicialmente asumimos el signo positivo

    // Ignoramos espacios en blanco iniciales
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    // Verificamos el signo
    if (*str == '-' || *str == '+') {
        sign = (*str++ == '-') ? -1 : 1; // Si es negativo, multiplicamos por -1
    }

    // Convertimos los caracteres numéricos en su valor numérico correspondiente
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str++ - '0');
    }

    return result * sign;
}

int main() {
    char str[100];

    printf("Ingrese una cadena de caracteres que represente un número: ");
    scanf("%s", str);

    int number = ft_atoi(str);

    printf("El número convertido es: %d\n", number);

    return 0;
}
