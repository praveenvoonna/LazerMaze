void setup(){
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}
int d=1,e=1,f=1;
void loop(){
  int b=digitalRead(11);
   int c=digitalRead(12);
   Serial.print(b);
   Serial.print("    ");
   Serial.print(c);
   Serial.print("\n");
   
   if(b==1&&e==1){
     d=0;
     e=0;
   }
   
   if(d==0){
  int a=analogRead(A1);
  int x=analogRead(A2);
  int y=analogRead(A4);
  int z=analogRead(A5);
  int j=analogRead(A3);
  //int c=analogRead(A4);
  d=0;
  
  Serial.print(a);
  Serial.print("     ");
  Serial.print(b);
  Serial.print("     ");
  Serial.print(c);
   Serial.print("     ");
  Serial.print(y);
  Serial.print("     ");
  Serial.print(x);
   Serial.print("     ");
  Serial.print(z);
   Serial.print("     ");
  Serial.print(j);
  
  Serial.print("\n");
  if(f==1){
  if(x<300||y<300||j<300||a<300){
    digitalWrite(8,HIGH);
    Serial.print("bgnh");
    f=0;
  }else{
  digitalWrite(8,LOW);
  
  }}
  if(c==1){
    d=1;
    digitalWrite(8,LOW);
    e=1;f=1;
  }
 // delay(500);
   }
}
