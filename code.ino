  /*
  Acelerobotics
  */
  
  
  // the setup function runs once when you press reset or power the board
  void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT); //motor right -ve
  pinMode(12, OUTPUT); //motor right +ve
  pinMode(11, OUTPUT); //mootor left -ve
  pinMode(10, OUTPUT); //motor left +ve
  pinMode(A1, INPUT); //X
  pinMode(A2, INPUT); //Y
  pinMode(A3, INPUT); //Z
  
  Serial.begin(9600);
  }
  
  // the loop function runs over and over again forever
  void loop() {
  
  int X = analogRead(A1);
  int Y = analogRead(A2);
  int Z = analogRead(A3);
  
  Serial.print(X);
  Serial.print(" ");
  Serial.print(Y);
  Serial.print(" ");
  Serial.println(Z);
  
  //delay(10);
  if((X > 290) && (X < 365) && (Y>290) && (Y<365)) //No Movement
  {
    digitalWrite(13, HIGH);   
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH); 
    
  }
  else if((X > 365) && (Y > 290) && (Y<365)) //Only backward
  { 
    digitalWrite(13, HIGH);   
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    
  }
  else if((X < 290) && (Y > 290) && (Y<365)) //Only forward
  {
    digitalWrite(13, LOW);   
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  } 
  else if((Y < 290) && (X > 290) && (X < 365)) //Only Left
  {
  digitalWrite(13, LOW);   
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  }
  else if((Y > 365) && (X > 290) && (X<365)) //Only Right
  {
  digitalWrite(13, HIGH);   
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  }
  //delay(10); 
  /*
  digitalWrite(13, LOW);   
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH); 
  delay(1000); 
  */            
  }
