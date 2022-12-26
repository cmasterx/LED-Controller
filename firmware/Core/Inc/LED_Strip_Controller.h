#ifndef LED_STRIP_CONTROLLER_H
#define LED_STRIP_CONTROLLER_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define LED_STRIP_CONTROLLER_RUNTIME_CHECK_ENABLED defined(RUNTIME_SAFETY)

typedef uint8_t LEDBuffer_t;

typedef uint32_t LEDColor_t;

typedef struct LED_Strip_Controller_t
{
    size_t size;
    LEDBuffer_t buffer[];
} LED_Strip_Controller;

/**
 * @brief 
 * 
 * @param lenLED Number of LEDs in the LED strip 
 */
LED_Strip_Controller * LED_Strip_Controller_malloc(size_t lenLED);

/**
 * @brief Initialize LED Strip Controller
 * 
 * @param ledController LED Controller object
 */
void LED_Strip_Controller_init(LED_Strip_Controller *controller);

/**
 * @brief 
 * 
 * @param controller 
 * @param idx 
 * @param color 
 * @return true 
 * @return false 
 */
bool LED_Strip_Controller_set_LED(LED_Strip_Controller *controller, size_t idx, LEDColor_t color);

#endif  // LED_STRIP_CONTROLLER_H
