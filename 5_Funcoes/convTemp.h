void menu(){
    printf(".:: Programa de Conversão de Temperatura ::.\n");
    printf("Escolha a conversão de temperatura:\n");
    printf("\t1. Fahrenheit para Celsius\n");
    printf("\t2. Celsius para Fahrenheit\n");
    printf("\t3. Celsius para Kelvin\n");
    printf("\t4. Kelvin para Celsius\n");
    printf("\t5. Fahrenheit para Kelvin\n");
    printf("\t6. Kelvin para Fahrenheit\n");
    printf("Opção: ");
}


float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}