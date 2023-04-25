// LED powered through pin 12 on arduino
int LED =  12;
//Switch will be through pin 2
int Switch = 2;
void setup() {
    //setup output and input on the arduino
    pinMode(LED, OUTPUT);
    pinMode(Switch, INPUT);
}

void loop() {
    //within the loop function, set conditional statement based on status of the input switch.
    if(digitalRead(Switch) == HIGH) {
        digitalWrite(LED, HIGH); //turn LED on
    } else {
        digtalWrite(LED, LOW); //turn LED off
    }
}
