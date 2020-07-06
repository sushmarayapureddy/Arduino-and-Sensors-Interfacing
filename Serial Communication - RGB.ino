void setup()
{
  pinMode(9, OUTPUT);//Green
  pinMode(10, OUTPUT);//Blue
  pinMode(11, OUTPUT);// Red
  Serial.begin(9600);
}

void loop()
{
  if ( Serial.available())
  {
    char state = Serial.read();
    if(state == 'R')
    {
      digitalWrite(9,1);
      digitalWrite(10,0);
      digitalWrite(11,0);
    }
    if(state == 'G')
    {
      digitalWrite(9,0);
      digitalWrite(10,1);
      digitalWrite(11,0);
    }
    if(state == 'B')
    {
      digitalWrite(9,0);
      digitalWrite(10,0);
      digitalWrite(11,1);
    }}
    
 }

// RGB -Red Green Blue LED

// 1. Common Cathode - Negative pin is common
// 2. Common Anode - Positive pin is common
