void setup()
{
  pinMode(7, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(5000); 
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(5000); 
  digitalWrite(4, LOW);
  digitalWrite(9, HIGH);
  delay(5000); 
  digitalWrite(9, LOW);
   
}
