
#include "libft.h"
/*#include <unistd.h> // Para la función write
#include <fcntl.h> // Para las constantes de file descriptor
#include <stdio.h> // Para printf*/

void ft_putnbr_fd(int n, int fd) {
    if (n < 0) {
        write(fd, "-", 1); // Escribir el signo negativo
        n = -n; // Convertir el número a positivo
    }

    // Convertir el número en cada dígito y escribirlo en el archivo
    if (n >= 10) {
        ft_putnbr_fd(n / 10, fd);
    }
    char digit = '0' + n % 10; // Convertir el dígito en un carácter
    write(fd, &digit, 1); // Escribir el carácter en el archivo
}

/*
int main() {
    // Abrir un archivo para escritura
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    // Escribir un número entero en el archivo usando ft_putnbr_fd
    int num = -12345;
    ft_putnbr_fd(num, fd);
    write(fd, "\n", 1); // Agregar un salto de línea al final

    // Cerrar el archivo
    if (close(fd) == -1) {
        perror("No se pudo cerrar el archivo");
        return 1;
    }

    printf("El número se ha escrito en el archivo 'output.txt'\n");

    return 0;
}*/
