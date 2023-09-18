#define LED_PIN 7
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  Serial.println("1");
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  for(int i = 0; i < 5; i++)
  {
    Serial.println("write");
    digitalWrite(LED_PIN, LOW);
    delay(100);
    digitalWrite(LED_PIN, HIGH);
    delay(100);
  }
  while(1){
    }
  }
