/* Ejercicio N1 - Blink de un Led
 * Para éste ejercicio se utiliza un Led conectado al pin D4 de la placa NodeMCU
 * Objetivo: Realizar una intermitencia en el led cada 2 segundos, estando 1 segundo 
 * en ON y
 * 1 segundo en OFF
 */

void setup() {
  pinMode(D4,OUTPUT);   //Configuro D4 como salida
}

void loop() {
  digitalWrite(D4, HIGH);
  delay(1000);
  digitalWrite(D4, LOW);
  delay(1000);
}
