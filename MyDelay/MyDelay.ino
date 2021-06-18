/*  Author: Pol Riera González
Contact: di.pol.riera@gmail.com
Github: https://github.com/DiPolRiera

Description code: Substitution of delay function for millis, different uses.
*/
 
 unsigned long initial;
 int duration;
 const int led = 2;
 
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  openDelay();
  digitalWrite(led, 1);
  Serial.println("LED ON");
  closeDelay(2000);
  
  myDelay(3000); 
  digitalWrite(led, 0);
  Serial.println("LED OFF");
  
  openDelay();
  Serial.println("6s");
  closeDelay(6000); 
  
}

void openDelay(){
  initial = millis();
}

void closeDelay(int duration){
    while(millis() < initial+duration);
}

void myDelay(int duration){
  initial = millis();
    while(millis() < initial+duration);
}
