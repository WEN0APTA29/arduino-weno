
int tombol1 = 5;   
int tombol2 = 7;     
int led = 6;         

void setup() {
  pinMode(tombol1, INPUT);     
  pinMode(tombol2, INPUT);     
  pinMode(led, OUTPUT);      
  Serial.begin(9600);         
}

void loop() {
  int hasil1 = digitalRead(tombol1);  
  int hasil2 = digitalRead(tombol2);  

  
  if (hasil1 == HIGH) {
    digitalWrite(led, HIGH);   
    Serial.println("LED Menyala");
  }

  
  if (hasil2 == HIGH) {
    digitalWrite(led, LOW);    
    Serial.println("LED Mati");
  }

 
}



