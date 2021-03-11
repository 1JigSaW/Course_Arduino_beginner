#define RED_PIN 8
#define YELLOW_PIN 10
#define BLUE_PIN 12

int red_on = 1000;
int yellow_on = 1000;
int blue_on = 500;
void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(red_on);
  digitalWrite(YELLOW_PIN, HIGH); 
  delay(red_on);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  delay(red_on);
  for(int i = 0; i < 3;i = i+1){
    digitalWrite(BLUE_PIN, HIGH);
    delay(blue_on);
    digitalWrite(BLUE_PIN, LOW);
  }
  digitalWrite(YELLOW_PIN, HIGH); 
  delay(yellow_on);
  digitalWrite(YELLOW_PIN, LOW);
}
