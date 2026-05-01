C++
const int potPin = 0; 
const int ledPin = 13; // Uno'nun üzerindeki dahili L ledi
int val = 0; 

// SİHİRLİ ŞALTER BURADA:
#define DEBUG

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin); 
  digitalWrite(ledPin, HIGH); 
  delay(val); // Potansiyometreye göre hız değişir
  digitalWrite(ledPin, LOW); 
  delay(val); 

  // EĞER DEBUG TANIMLIYSA BU SATIRLARI DERLE:
  #if defined DEBUG
    Serial.println(val);
  #endif
}
