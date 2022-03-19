/* Ejercicio N2.0 - Primera Conexión WiFi
 * Para éste ejercicio se utiliza la librería ESP8266WiFi.h para conectar el módulo a una red WiFi existente
 * Objetivo: Realizar la conexión del módulo ESP a una red WiFi a través de las funciones de la librería  
 * ESP8266WiFi.h y verificar la IP que le asigna el Punto de acceso
 * 
 * Nota: Debe reemplazar "nombre-red" y "contraseña-red" por los valores correspondientes a la red a la 
 * cual se conectará el módulo.
 */
#include <ESP8266WiFi.h>                        // Librería de funciones WiFi

void setup()
{
  Serial.begin(115200);                         // Inicializo el port Serial
  Serial.println();

  WiFi.begin("nombre-red", "contraseña-red");   // Inicio la conexión a la red WiFi

  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED)         // Espero mientras conecta
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Conectado, dirección IP: ");    // Conexión Exitosa
  Serial.println(WiFi.localIP());               // Imprimo la dirección IP Asiganada
}

void loop() {}
