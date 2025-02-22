const int IR_Pin = 2; //IR Sensor PIN
const int GLED_Pin = 11; //Green LED PIN
const int RLED_Pin = 12; //RED LED PIN

void setup() 
{
  pinMode(IR_Pin, INPUT); // make the IR pin an INPUT:
  pinMode(GLED_Pin, OUTPUT); // make the LED pin an OUTPUT:
  pinMode(RLED_Pin, OUTPUT); // make the LED pin an input:
}
void loop() 
{
  int IR_State = digitalRead(IR_Pin);  // read the Sensor pin:
  
  if(IR_State == HIGH)
  {
    digitalWrite(GLED_Pin,LOW);
    digitalWrite(RLED_Pin,HIGH);
  }
  else
  {
    digitalWrite(RLED_Pin,LOW);
    digitalWrite(GLED_Pin,HIGH);
  }
}
