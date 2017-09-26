Byte led=3; 
Byte i=; 
Int tiempo=70; 
 
Void setup () { 
pinMode(led,OUTPUT); 
digitalWritte(led,LOW); 
} 
Void loop () { 
For(i=0;i<=255;i=i+1) { 
analogWrite(led,i); 
delay(tiempo); 
} 
}
