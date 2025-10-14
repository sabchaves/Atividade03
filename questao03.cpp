// Letra A:

//Local dos laços de repetição
int i;
for (i = 0; i < 3; i++){ // Alterado: i < 3 (imprime 0, 1, 2)
    int resto = i % 4;
    Serial.print("Resto da divisão: ");
    Serial.println(resto);
    delay(1000);
}
// Fim local dos laços de repetição

// Letra B:

//Local dos laços de repetição
int i;
// Vamos manter o loop i < 10 e o resto % 4 para ter 4 estados de LED (0, 1, 2, 3)
for (i = 0; i < 10; i++){
    // Calcula o resto. Os valores possíveis são 0, 1, 2 e 3.
    int resto = i % 4;

    // Desliga todos antes de acender o novo
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

    if (resto == 0) {
        digitalWrite(led1, HIGH);
    } else if (resto == 1) {
        digitalWrite(led2, HIGH);
    } else if (resto == 2) {
        digitalWrite(led3, HIGH);
    }
    // Para resto == 3, todos ficam desligados (já garantido antes do if)

    Serial.print("Resto da divisão: ");
    Serial.println(resto);
    delay(1000); // Mantém o LED aceso por 1 segundo
}
// Fim local dos laços de repetição

// Letra C: 

//Local dos laços de repetição
int i;
// Alterado: i <= 10. A última iteração será i=10 (resto = 2).
for (i = 0; i <= 10; i++){ 
    int resto = i % 4;

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

    if (resto == 0) {
        digitalWrite(led1, HIGH);
    } else if (resto == 1) {
        digitalWrite(led2, HIGH);
    } else if (resto == 2) {
        digitalWrite(led3, HIGH);
