#define LED_PIN 7
bool toggle = 0;
void setup() {
  pinMode(LED_PIN, OUTPUT); 
}

void loop(){
  digitalWrite(LED_PIN, toggle);
  delay(1000);
  for(int i = 0; i <= 10; i++)
  {
    digitalWrite(LED_PIN, !toggle);
    toggle = !toggle;
    delay(100);
  }
  while(1){
    }
  }
