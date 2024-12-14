void setup() {
    pinMode(2, INPUT);  // Chân 2: INPUT
    pinMode(12, INPUT); // Chân 12: INPUT
    pinMode(3, OUTPUT); // Chân 3: OUTPUT
    pinMode(11, OUTPUT); // Chân 11: OUTPUT
}

void loop() {
    int inputState1 = digitalRead(12); // Đọc trạng thái chân 12
    int inputState2 = digitalRead(2);   // Đọc trạng thái chân 2

    // Nếu chân 12 mức cao, điều khiển chân 11 mức cao
    if (inputState1 == HIGH) {
        digitalWrite(11, HIGH);
    } else {
        digitalWrite(11, LOW);
    }

    // Nếu chân 2 mức cao, điều khiển chân 3 mức cao
    if (inputState2 == HIGH) {
        digitalWrite(3, HIGH);
    } else {
        digitalWrite(3, LOW);
    }
}
