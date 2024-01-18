// Define the pins for RGB LED
const int redPin = D1;    // GPIO pin for the Red color
const int greenPin = D2;  // GPIO pin for the Green color
const int bluePin = D3;   // GPIO pin for the Blue color

void setup() {
  pinMode(redPin, OUTPUT);    // Set Red pin as an output
  pinMode(greenPin, OUTPUT);  // Set Green pin as an output
  pinMode(bluePin, OUTPUT);   // Set Blue pin as an output
}

void loop() {
  // Turn on Red
  setColor(255, 0, 0);
  delay(1000);  // Wait for 1 second

  // Turn on Green
  setColor(0, 255, 0);
  delay(1000);  // Wait for 1 second

  // Turn on Blue
  setColor(0, 0, 255);
  delay(1000);  // Wait for 1 second

  // Turn on White (combination of all colors)
  setColor(255, 255, 255);
  delay(1000);  // Wait for 1 second
}

// Function to set the color of the RGB LED
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);       // Set intensity of Red
  analogWrite(greenPin, green);   // Set intensity of Green
  analogWrite(bluePin, blue);     // Set intensity of Blue
}
