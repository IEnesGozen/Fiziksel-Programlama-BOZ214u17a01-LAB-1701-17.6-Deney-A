const int potPin = A0; // Potansiyometre A0 pinine bağlı
const int ledPin = 13; // Uno'nun üzerindeki dahili L ledi
int val = 0; 

// SİHİRLİ ŞALTER BURADA:
// Bu satırın başındaki // işaretini kaldırırsan Serial Monitör çalışır.
// Eğer // koyarsan Serial Monitör susar.
#define DEBUG 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin); 
  digitalWrite(ledPin, HIGH); 
  delay(val); // Potansiyometreye göre hız değişir[cite: 4]
  digitalWrite(ledPin, LOW); 
  delay(val); 

  // EĞER DEBUG TANIMLIYSA BU SATIRLARI DERLE:
  #if defined DEBUG
    Serial.print("Sensor Degeri: ");
    Serial.println(val);
  #endif
}
