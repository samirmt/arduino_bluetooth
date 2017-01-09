int led1 = 13;
int led2 = 11;

void setup(){
  
 Serial.begin(115200);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT); 
}

void loop(){
 if (Serial.available() >0){
  
  byte dado = Serial.read();
  
  switch(dado){
   
   case 'A':
      digitalWrite(led1, HIGH);
      break;
      
   case 'a':
      digitalWrite(led1, LOW);
      break;       
      
   case 'B':
      digitalWrite(led2, HIGH);
      break;
   
   case 'b':
      digitalWrite(led2, LOW);
      break;        
 } 
  
  delay(1000);
 }
}

