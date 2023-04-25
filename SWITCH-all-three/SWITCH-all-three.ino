//pins 10-12 are LED outputs
int LED_1 = 10;
int LED_2 = 11;
int LED_3 = 12;

//pins 2-4 are Switch inputs
int Switch_1 = 2;
int Switch_2 = 3;
int Switch_3 = 4;

void setup() {
    //setup input and output pins accordingly
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
    pinMode(Switch_1, INPUT);
    pinMode(Switch_2, INPUT);
    pinMode(Switch_3, INPUT);
}

void loop() {
    //create conditional statements to apply to the on/off state of each switch
    if(digitalRead(Switch_1) == HIGH) {
        digtalWrite(LED_1, HIGH);
    } else {
        digtalWrite(LED_1, LOW);
    }

    if(digtalRead(Switch_2) == HIGH) {
        digitalWrite(LED_2, HIGH);
    } else {
        digitalWrite(LED_2, LOW);
    }

    if(digitalRead(Switch_3) == HIGH) {
        digitalWrite(LED_3, HIGH);
    } else {
        digitalWrite(LED_3, LOW);
    }
}
