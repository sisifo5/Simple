float area;
float pi = 3.1415;
int radio = 1;
int rad = radio*radio;
int t = 1500;

void setup() {

  Serial.begin(9600);

}

void loop() {

  float area = pi*rad++;
  Serial.print("El radio de:");
  Serial.print(rad);
  Serial.print("es de:");
  Serial.println(area);
  delay(t);
}
