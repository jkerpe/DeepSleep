/*
 * Code to wake up the ESP32 from Deepsleep over an Interrupt attached to an external Touchpin 
 * 
 * Created by: Maximilian Kühn, Juliane Kerpe
 * Last modified on 03.11.2022
 */
#include <Wire.h>
#define THRESHOLD 40


// Function which gets called by interrupt
void gotTouched(){

}

// Function to start the DeepSleep
void startDeepSleep()
{
    esp_sleep_enable_touchpad_wakeup();
    esp_deep_sleep_start();
}

// Other stuff can be made here, this is just a dummy
void doSomethingElse(){
  // LED an
  Serial.println("I'm doing something else for 1 second...");
  delay(1000);
  // LED aus
}

// Caution: the setup function is called every time the ESP32 wakes up from deepsleep
void setup() {
    Serial.begin(115200);
    Serial.println("I'm awake");

    // Attach the interrupt to an external Touchpin at T0 = GPIO4
    touchAttachInterrupt(T0, gotTouched, THRESHOLD); 

    doSomethingElse();
    
    Serial.println("I'm going to sleep...");
    Serial.println("");
    startDeepSleep();

}

// the loop should never be called
void loop() {
  Serial.println("Schlecht!");
}
