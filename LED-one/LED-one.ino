//Define variables
int LED =  12; //pin 12 on the arduino
void setup() {
    //initialize the arduino
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW); //LOW is the same as Ground or zero volts. HIGH equals whatever voltage output the assigned pin outputs.
}

void loop() {
    //code here will run repeatedly until the arduino is turned off or new code is uploaded
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(500); //should make LED blink at a set interval.
}
