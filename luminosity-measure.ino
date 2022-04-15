const pin_t LED = D7;
const pin_t LIGHT_SENSOR = A0;


void setup() {
    pinMode(LED, OUTPUT);
    pinMode(LIGHT_SENSOR,  INPUT);  
}

void loop() {
    
  float reading = analogRead(LIGHT_SENSOR);
  
  Particle.publish("Room Luminosity", String(reading, 5), PRIVATE);
  delay(30 * 1000);
}