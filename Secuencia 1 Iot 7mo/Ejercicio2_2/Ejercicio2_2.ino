/* Ejercicio N2.2 - Modo de Coneción WiFi Station
 * Para éste ejercicio se utiliza la librería ESP8266WiFi.h para conectar el módulo a una red WiFi existente
 * Objetivo: Realizar la conexión del módulo ESP a una red WiFi a través de las funciones de la librería  
 * ESP8266WiFi.h y verificar la IP que le asigna el Punto de acceso
 * 
 * Nota: Debe reemplazar las ? en ssid_STA = "????????"; y password_STA = "????????"; por los valores 
 * correspondientes a la red a la cual se conectará el módulo.
 */
 
#include <ESP8266WiFi.h>

// Credenciales para la conexíon a la Red
const char *ssid_STA = "????????";
const char *password_STA = "????????";

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println();
  WiFi.mode(WIFI_STA);                    // Modo de operación -> WIFI_STA
  WiFi.begin(ssid_STA, password_STA);     // Credenciales
  // Espero mientras conecta a la Red
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Seteo la reconexión automática a la red WiFi
  WiFi.setAutoReconnect(true);
  
  // Información de la conexión
  Serial.println("WiFi conectada.");
  Serial.println();
  WiFi.printDiag(Serial);
  Serial.println();
  Serial.print("STA dirección IP: ");
  Serial.println(WiFi.localIP());
}
void loop() { }
