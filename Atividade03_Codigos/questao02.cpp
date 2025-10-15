// Letra A:

//Local dos laços de repetição
int i = 0;
while(i <= valor2){
    Serial.print("Valor: ");
    Serial.println(i);
    delay(1000);
    i++;
}
// Fim local dos laços de repetição

// Letra B:

//Local dos laços de repetição
int i = valor1;
while(i <= valor2){ // Usando valor2 como limite
    Serial.print("Valor: ");
    Serial.println(i);
    delay(1000);
    i++;
}
// Fim local dos laços de repetição

// Letra C:

//Local dos laços de repetição
int i = 0;
while(i < 10){
    Serial.print("Valor: ");
    Serial.println(i);
    delay(1000);
    i = i + 2; // ou i += 2
}
// Fim local dos laços de repetição

// Letra D:

//Local dos laços de repetição
int i = 10;
while(i >= 0){
    Serial.print("Valor: ");
    Serial.println(i);
    delay(1000);
    i--;
}
// Fim local dos laços de repetição
