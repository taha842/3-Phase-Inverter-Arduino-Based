//Engr. Muhammad Taha
//0330-8530186

const int output_1 = 9;
const int output_2 = 10;
const int output_3 = 11;
const int t = 3310;  
void setup()
{
  pinMode(output_1, OUTPUT); // Phase 1
  pinMode(output_2, OUTPUT); // Phase 2
  pinMode(output_3, OUTPUT); // Phase 3
}
void loop()
{
  delayMicroseconds(t);
  digitalWrite(output_1, LOW);
  delayMicroseconds(t);
  digitalWrite(output_2, HIGH);
  delayMicroseconds(t);
  digitalWrite(output_3, LOW);
  delayMicroseconds(t);
  digitalWrite(output_1, HIGH);
  delayMicroseconds(t);
  digitalWrite(output_2, LOW);
  delayMicroseconds(t);
  digitalWrite(output_3, HIGH);
}

