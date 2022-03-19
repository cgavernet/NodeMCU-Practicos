/* Ejercicio N2.1 - Modo de Coneción WiFi SoftAP
 * Para éste ejercicio se utiliza la librería ESP8266WiFi.h para generar una red WiFi con el módulo ESP8266
 * Objetivo: Generar un punto de Acceso WiFi utlizando el módulo ESP8266 y la librería ESP8266WiFi.h 
 *  
 * Nota: Debe reemplazar las x en ssid_AP = "xxxxxx"; y password_AP = "xxxxxxxx"; por los valores que desea
 * utilizar en al SoftAP.
 */
 
#include <ESP8266WiFi.h>

// Credenciales para la creación de la Red
const char *ssid_AP = "xxxxxx";
const char *password_AP = "xxxxxxx";

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println();
  
  WiFi.mode(WIFI_AP);                   // Modo de operación -> WIFI_AP
  WiFi.softAP(ssid_AP, password_AP);    // Credenciales

  // Información de la conexión
  Serial.println("WiFi conectada.");
  Serial.println();
  WiFi.printDiag(Serial);
  Serial.println();
  Serial.print("AP dirección IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {}
