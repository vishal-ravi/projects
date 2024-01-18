 
int sensor_pin = 13; //NodeMCU On Board LED D7

//int board_led = 16; //NodeMCU On Board LED D0


void setup(){
  Serial.begin(9600);

  pinMode(sensor_pin, INPUT); //Set pin D7 as an input
  //pinMode(board_led, OUTPUT); //Set pin D0 as an input
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){

  int val_digital = digitalRead(sensor_pin);
  

   if(val_digital) {


     Serial.println(val_digital);
     Serial.print("\t");
     Serial.println("Earthquake");

     digitalWrite (LED_BUILTIN, HIGH);

   }

digitalWrite (LED_BUILTIN, LOW);
  
}