/* Ejercicio N2.3 - Modo de Conección WiFi Station + SoftAP
 * Para éste ejercicio se utiliza la librería ESP8266WiFi.h para conectar el módulo a una red WiFi 
 * existente y para generar un punto de acceso en el mismo módulo.
 * Objetivo: Realizar la conexión del módulo ESP a una red WiFi y generar un punto de acceso a través 
 * de las funciones de la librería ESP8266WiFi.h y verificar la IP que le asigna en ambos casos.
 * 
 * Nota: Debe reemplazar las ? en ssid_STA = "????????"; y password_STA = "????????"; por los valores 
 * correspondientes a la red a la cual se conectará el módulo y debe reemplazar las x en ssid_AP = "xxxxxxxx";
 * y en password_AP = "xxxxxxxx"; por los valores que desee para generar el punto de acceso.
 */
 
#include <ESP8266WiFi.h>

// Credenciales para generar el AP
const char *ssid_AP = "xxxxxxxx";
const char *password_AP = "xxxxxxxx";

// Credenciales para la conexíon a la Red
const char *ssid_STA = "????????";
const char *password_STA = "????????";

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println();
  WiFi.mode(WIFI_AP_STA);                   // Modo de operación -> WIFI_AP_STA
  WiFi.softAP(ssid_AP, password_AP);        // Credenciales para generar el AP
  WiFi.begin(ssid_STA, password_STA);       // Credenciales para conexión a la Red
  
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
  Serial.print("AP dirección IP: ");
  Serial.println(WiFi.softAPIP());
  Serial.print("STA dirección IP: ");
  Serial.println(WiFi.localIP());
  
}
void loop() { }
