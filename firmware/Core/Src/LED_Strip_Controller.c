#include "LED_Strip_Controller.h"
#include "error_handler.h"

LED_Strip_Controller * LED_Strip_Controller_malloc(size_t lenLED)
{
    
    LED_Strip_Controller *controller = malloc(sizeof(LED_Strip_Controller) + sizeof(LEDBuffer_t) * lenLED);
    controller->size = controller != NULL ? lenLED : 0;

    return controller;
}

void LED_Strip_Controller_init(LED_Strip_Controller *controller)
{
    #if LED_STRIP_CONTROLLER_RUNTIME_CHECK_ENABLED
    // controller cannot be NULL
    error_handler_throw_if_succeed(controller == NULL);
    #endif

    // TODO: Add code here
}

bool LED_Strip_Controller_set_LED(LED_Strip_Controller *controller, size_t idx, LEDColor_t color)
{
    error_handler_throw_if_succeed(idx > controller->size);
}
