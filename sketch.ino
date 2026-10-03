int merah = 12;
int kuning = 14;
int hijau = 27;

void setup() {
  // put your setup code here, to run once:
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(merah, HIGH);
  digitalWrite(kuning, LOW);
  digitalWrite(hijau, LOW);

  delay(1000);

  digitalWrite(merah, LOW);
  digitalWrite(kuning, HIGH);
  digitalWrite(hijau, LOW);

  delay(1000);

  digitalWrite(merah, LOW);
  digitalWrite(kuning, LOW);
  digitalWrite(hijau, HIGH);

  delay(1000);
}
