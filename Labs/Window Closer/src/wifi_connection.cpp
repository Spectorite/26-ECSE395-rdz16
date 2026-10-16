/*
#include <Arduino.h>

#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>

#define SERVICE_UUID "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
#define CHAR_RX      "6E400002-B5A3-F393-E0A9-E50E24DCCA9E" // phone -> ESP32
#define CHAR_TX      "6E400003-B5A3-F393-E0A9-E50E24DCCA9E" // ESP32 -> phone

BLECharacteristic *txChar;
bool connected = false;

class ServerCB : public BLEServerCallbacks {
  void onConnect(BLEServer*) { connected = true; }
  void onDisconnect(BLEServer* s) { connected = false; s->startAdvertising(); }
};

class RxCB : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic *c) {
    String v = c->getValue().c_str();
    Serial.print("From phone: ");
    Serial.println(v);
  }
};

void setup() {
  Serial.begin(115200);
  BLEDevice::init("ESP32-UART");
  BLEServer *server = BLEDevice::createServer();
  server->setCallbacks(new ServerCB());

  BLEService *svc = server->createService(SERVICE_UUID);
  txChar = svc->createCharacteristic(CHAR_TX, BLECharacteristic::PROPERTY_NOTIFY);
  txChar->addDescriptor(new BLE2902());
  BLECharacteristic *rx = svc->createCharacteristic(CHAR_RX, BLECharacteristic::PROPERTY_WRITE);
  rx->setCallbacks(new RxCB());

  svc->start();
  server->getAdvertising()->addServiceUUID(SERVICE_UUID);
  server->getAdvertising()->start();
}

void loop() {
  if (connected) {
    txChar->setValue("Hello from ESP32");
    txChar->notify();
  }
  delay(1000);
}
*/