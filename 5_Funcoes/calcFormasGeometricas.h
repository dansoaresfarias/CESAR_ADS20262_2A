#include <math.h>

void menu() {
    printf(".:: Programa de Cálculo de Formas Geométricas ::.\n");
    printf("Escolha a fórmula que deseja utilizar para calcular a forma geométrica:\n");
    printf("\t1. Área da Esfera\n");
    printf("\t2. Volume da Esfera\n");
    printf("\t3. Área do Cubo\n");
    printf("\t4. Volume do Cubo\n");
    printf("\t5. Área do Cilindro\n");
    printf("\t6. Volume do Cilindro\n");
    printf("\t7. Área do Cone\n");
    printf("\t8. Volume do Cone\n");
    printf("Informe sua opção: ");
}

// Esfera
float areaEsfera(float raio) {
    return 4 * M_PI * pow(raio, 2);
}

float volumeEsfera(float raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

// Cubo
float areaCubo(float lado) {
    return 6 * pow(lado, 2);
}

float volumeCubo(float lado) {
    return pow(lado, 3);
}

// Cilindro retilíneo
float areaCilindro(float raio, float altura) {
    return 2 * M_PI * raio * (raio + altura);
}

float volumeCilindro(float raio, float altura) {
    return M_PI * pow(raio, 2) * altura;
}

// Cone circular reto
float areaCone(float raio, float altura) {
    float geratriz = sqrt(pow(raio, 2) + pow(altura, 2));
    return M_PI * raio * (raio + geratriz);
}

float volumeCone(float raio, float altura) {
    return (1.0 / 3.0) * M_PI * pow(raio, 2) * altura;
}