#include <WiFi.h>
#include <WebServer.h>

// AP credentials
const char* ssid = "ESP32C3_AP";
const char* password = "12345678";

WebServer server(80);

void handleRoot() {
  server.send(200, "text/html", "<h1>Hello World</h1>");
}

void setup() {
  Serial.begin(115200);

  // Start Access Point
  WiFi.softAP(ssid, password);

  Serial.println("Access Point Started");
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  // Route
  server.on("/", handleRoot);

  // Start server
  server.begin();
  Serial.println("Web server started");
}

void loop() {
  server.handleClient();
}