#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#define error_handler_throw_if_succeed(condition)               \
    do {                                                        \
        if( (condition) ) _Error_Handler(__FILE__, __LINE__);   \
    } while (0)                                                                   

#define error_handler_throw_if_fail(condition) error_handler_throw_if_fail( (condition) )


#endif // ERROR_HANDLER_H
