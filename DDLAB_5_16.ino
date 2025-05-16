int ledPin = 9;      // LED connected to digital pin 9 (PWM)
int analogPin = A3;  // Potentiometer connected to analog pin A3
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);          // 從可變電阻讀值（0~1023）
  analogWrite(ledPin, val / 4);         // 輸出PWM訊號（0~255）
  Serial.println(val);
  delay(1);  // 用較長的延遲讓輸出穩定
}
