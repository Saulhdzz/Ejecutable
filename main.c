#include <stdio.h>

// Definir precios
const int precioEnchiladas = 40;
const int precioTacos = 30;
const int precioFlautas = 35;
const int precioHamburguesas = 50;
const int precioGorditas = 45;

// Función para mostrar el menú
void mostrarMenu() {
    printf("Menu:\n");
    printf("1. Enchiladas - $40\n");
    printf("2. Tacos - $30\n");
    printf("3. Flautas - $35\n");
    printf("4. Hamburguesas - $50\n");
    printf("5. Gorditas - $45\n");
}

// Función para calcular el total
int calcularTotal(int cantEnchiladas, int cantTacos, int cantFlautas, int cantHamburguesas, int cantGorditas) {
    return (cantEnchiladas * precioEnchiladas) +
           (cantTacos * precioTacos) +
           (cantFlautas * precioFlautas) +
           (cantHamburguesas * precioHamburguesas) +
           (cantGorditas * precioGorditas);
}

// Función para mostrar la factura
void mostrarFactura(int cantEnchiladas, int cantTacos, int cantFlautas, int cantHamburguesas, int cantGorditas, int total) {
    printf("\n--- Factura ---\n");
    printf("Enchiladas: %d x $40 = $%d\n", cantEnchiladas, cantEnchiladas * precioEnchiladas);
    printf("Tacos: %d x $30 = $%d\n", cantTacos, cantTacos * precioTacos);
    printf("Flautas: %d x $35 = $%d\n", cantFlautas, cantFlautas * precioFlautas);
    printf("Hamburguesas: %d x $50 = $%d\n", cantHamburguesas, cantHamburguesas * precioHamburguesas);
    printf("Gorditas: %d x $45 = $%d\n", cantGorditas, cantGorditas * precioGorditas);
    printf("Total: $%d\n", total);
}

// Función principal
int main() {
    // Variables para cantidades
    int cantEnchiladas = 0, cantTacos = 0, cantFlautas = 0, cantHamburguesas = 0, cantGorditas = 0;
    int opcion, eliminar, total;

    // Mostrar menú
    mostrarMenu();

    // Pedir cantidades
    printf("\nIngrese la cantidad de enchiladas: ");
    scanf("%d", &cantEnchiladas);
    printf("Ingrese la cantidad de tacos: ");
    scanf("%d", &cantTacos);
    printf("Ingrese la cantidad de flautas: ");
    scanf("%d", &cantFlautas);
    printf("Ingrese la cantidad de hamburguesas: ");
    scanf("%d", &cantHamburguesas);
    printf("Ingrese la cantidad de gorditas: ");
    scanf("%d", &cantGorditas);

    // Calcular total
    total = calcularTotal(cantEnchiladas, cantTacos, cantFlautas, cantHamburguesas, cantGorditas);

    // Mostrar factura
    mostrarFactura(cantEnchiladas, cantTacos, cantFlautas, cantHamburguesas, cantGorditas, total);

    // Preguntar si desea eliminar algo
    printf("\nDesea eliminar algún platillo? (1: Sí, 2: No): ");
    scanf("%d", &opcion);

    while (opcion == 1) {
        printf("\nSeleccione el platillo a eliminar:\n");
        printf("1. Enchiladas\n2. Tacos\n3. Flautas\n4. Hamburguesas\n5. Gorditas\n");
        printf("Ingrese su opción: ");
        scanf("%d", &eliminar);

        switch (eliminar) {
            case 1: cantEnchiladas = 0; break;
            case 2: cantTacos = 0; break;
            case 3: cantFlautas = 0; break;
            case 4: cantHamburguesas = 0; break;
            case 5: cantGorditas = 0; break;
            default: printf("Opción no válida.\n");
        }

        // Recalcular total
        total = calcularTotal(cantEnchiladas, cantTacos, cantFlautas, cantHamburguesas, cantGorditas);

        // Mostrar factura actualizada
        mostrarFactura(cantEnchiladas, cantTacos, cantFlautas, cantHamburguesas, cantGorditas, total);

        // Preguntar si desea seguir eliminando
        printf("\nDesea eliminar otro platillo? (1: Sí, 2: No): ");
        scanf("%d", &opcion);
    }

    // Imprimir factura final
    printf("\n--- Factura Final ---\n");
    printf("Total a pagar: $%d\n", total);

    return 0;
}