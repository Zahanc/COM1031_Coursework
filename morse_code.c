/**
 * The given template is a guideline for your coursework only.
 * You are free to edit/create any functions and variables.
 * You can add extra C files if required. HELLLO :))
*/


#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "includes/seven_segment.h"

#define BUTTON_PIN			16	// Pin 21 (GPIO 16)

// declare global variables e.g., the time when the button is pressed 
int pressed ;

// --------------------------------------------------------------------
// declare the function definitions, e.g, decoder(...); and ther functions
// given the user input, you can decode if the input is a character
void decoder();

// check if the button press is a dot or a dash
void checkButton();

int main() {
	stdio_init_all();

	// Initialise the seven segment display.
	seven_segment_init();

	// Turn the seven segment display off when the program starts.
	seven_segment_off();

	// Initialize the button's GPIO pin.
	gpio_init(BUTTON_PIN);
	gpio_set_dir(BUTTON_PIN, GPIO_IN);
	gpio_pull_down(BUTTON_PIN); // Pull the button pin towards ground (with an internal pull-down resistor).

	seven_segment_show(36);
	sleep_ms(500);
	seven_segment_off();

	while (true) {

		while (gpio_get(BUTTON_PIN)){			
            // record how long the button is pressed
            // .....
			sleep_ms(150); // adjust the sleep_ms as required
		} 
        // check if the button press is a dot or a dash
		checkButton();
	}
}

void decoder(){
    // a function to be implemented
}

void checkButton(){
    // a function to be implemented
}

