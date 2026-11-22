#define PI 3.14159265358979323846
#define pow2(x) ((x) * (x))
#define pow3(x) ((x) * (x) * (x))
#define areaEsfera(raio) (4 * PI * pow2(raio))
#define volumeEsfera(raio) ((4.0 / 3.0) * PI * pow3(raio))
#define areaCubo(lado) (6 * pow2(lado))
#define volumeCubo(lado) (pow3(lado))
#define areaCilindro(raio, altura) (2 * PI * raio * (raio + altura))
#define volumeCilindro(raio, altura) (PI * pow2(raio) * altura)
#define areaParalelepipedo(comprimento, largura, altura) (2 * (comprimento * largura + comprimento * altura + largura * altura))
#define volumeParalelepipedo(comprimento, largura, altura) (comprimento * largura * altura)

menu() {
    printf(".:: Programa de Cálculo de Formas Geométricas ::.\n");
    printf("Escolha a fórmula que deseja utilizar para calcular a forma geométrica:\n");
    printf("\t1. Área da Esfera\n");
    printf("\t2. Volume da Esfera\n");
    printf("\t3. Área do Cubo\n");
    printf("\t4. Volume do Cubo\n");
    printf("\t5. Área do Cilindro\n");
    printf("\t6. Volume do Cilindro\n");
    printf("\t7. Área da Paralelepípedo\n");
    printf("\t8. Volume da Paralelepípedo\n");
    printf("Informe sua opção: ");
}