// We define MY_LED to be the LED that we want to blink. 
const pin_t MY_LED = D7;

// Each unit of time for blinking
const int unit = 150;

SYSTEM_THREAD(ENABLED);

void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

//dot (1 unit)
void dot() {
    digitalWrite(MY_LED, HIGH);
	delay(unit);
	digitalWrite(MY_LED, LOW);
}

//dash (3 units)
void dash(){
    digitalWrite(MY_LED, HIGH);
	delay(unit * 3);
	digitalWrite(MY_LED, LOW);
}

//space between same letter (1 unit)
void space_sl() {
    delay(unit);
}

//space between letters (3 units)
void space_l() {
    delay(unit * 3);
}

//space between words (7 units)
void space_w() {
    delay(unit * 7);
}

//a
void a() {
    dot();
    space_sl();
    dash();
}

//n
void n() {
    dash();
    space_sl();
    dot();
}

//d
void d() {
    dash();
    space_sl();
    dot();
    space_sl();
    dot();
}

//r
void r() {
    dot();
    space_sl();
    dash();
    space_sl();
    dot();
}

//e
void e() {
    dot();
}

//w
void w() {
    dot();
    space_sl();
    dash();
    space_sl();
    dash();
}

//c
void c(){
    dash();
    space_sl();
    dot();
    space_sl();
    dash();
    space_sl();
    dot();
}

//h
void h(){
    dot();
    space_sl();
    dot();
    space_sl();
    dot();
    space_sl();
    dot();
}

//o
void o(){
    dash();
    space_sl();
    dash();
    space_sl();
    dash();
}

void loop() {
    a();
    space_l();
    n();
    space_l();
    d();
    space_l();
    r();
    space_l();
    e();
    space_l();
    w();
    space_w();
    
    c();
    space_l();
    h();
    space_l();
    o();
    space_w();
}

