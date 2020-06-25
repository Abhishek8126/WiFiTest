#include <WiFi.h>
#include <ESP32Ping.h>
const char* ssid     = "Abhishek";
const char* password = "abhishek";
void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.print('\n');
  WiFi.begin(ssid, password);
  Serial.print("Connecting..");
  Serial.print(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("-");
  }
  Serial.print('\n');
  Serial.print("WiFi Connected");
  Serial.print("IP Address: ");
  Serial.print(WiFi.localIP());
  bool success = Ping.ping("www.google.com", 3);
  if (!success) {
    Serial.print('\n');
    Serial.print("Failed");
  }
  Serial.print('\n');
  Serial.print("Success");
}
void loop() {
}
