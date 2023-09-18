#define LED_PIN 7
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  digitalWrite(LED_PIN, HIGH);
  Serial.println("1");
  delay(1000);
  for(int i = 0; i < 5; i++)
  {
    Serial.println("write");
    digitalWrite(LED_PIN, LOW);
    delay(100);
    digitalWrite(LED_PIN, HIGH);
    delay(100);
  }
}

void loop(){
  }
