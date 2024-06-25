#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
void app_main(void){
    char *tskname = pcTaskGetName(NULL);
    ESP_LOGI(tskname, "starting up\n");
    gpio_set_direction(GPIO_NUM_2 , GPIO_MODE_OUTPUT);
    while(true){
        gpio_set_level(GPIO_NUM_2 , 1);
        printf("THE LED TURNED ON \n");
        vTaskDelay(100);
        gpio_set_level(GPIO_NUM_2 , 0);
        printf("THE LED TURNED OFF \n");
        vTaskDelay(100);
    }
}

