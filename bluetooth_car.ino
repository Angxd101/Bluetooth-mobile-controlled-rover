char b;
 
void setup() {
pinMode(13,OUTPUT);   //left motors goes forward
pinMode(12,OUTPUT);   //left motors goes reverse
pinMode(11,OUTPUT);   //right motors goes forward
pinMode(10,OUTPUT);   //right motors goes reverse

Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available())
{
  b = Serial.read();
  Serial.println(t);
}
 
if(b == 'F'){            //drives the rover in forward direction
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(b == 'B'){      //drives in the backward direction
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(b == 'L'){      //turns the rover in the right dierection(moves the left side tyre)
  digitalWrite(13,HIGH);
}
 
else if(b == 'R'){      //turns the rover in the left direction(moves the right side tyre)
  digitalWrite(11,HIGH);
}

else if(b == 'S'){      //Stops the rover
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}
