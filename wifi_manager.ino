#include <ESP8266WiFi.h>         
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN,OUTPUT); 
    WiFiManager wifiManager;
    wifiManager.resetSettings();
    wifiManager.autoConnect("LocateIOT Hotspot");
    Serial.println("connected :)");     
}
void loop() { 
  if (WiFi.status() == WL_CONNECTED) 
  {
    while(WiFi.status() == WL_CONNECTED){           
      digitalWrite(LED_BUILTIN,HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN,LOW);
      delay(200);   
   }
  }
  else 
  {
    digitalWrite(LED_BUILTIN,LOW);
  }
}
