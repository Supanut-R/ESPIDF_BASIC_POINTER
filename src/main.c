#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define TAG "POINTER"

void app_main() {
    vTaskDelay(3000 / portTICK_PERIOD_MS);
    int var = 20; 
    // declare pointer variable 
    int* ptr = (int*)malloc(sizeof(int));  

    ESP_LOGI(TAG,"Address at ptr = %d", ptr); 
    ptr = &var; 
    ESP_LOGI(TAG,"Address at ptr = %d", ptr); 
    ESP_LOGI(TAG,"Address at var = %d", &var);  
    var++;
    ESP_LOGI(TAG,"Value at *ptr = %d", *ptr); 
    var++;
    ESP_LOGI(TAG,"Value at *ptr = %d", *ptr);  
    (*ptr)++;
    ESP_LOGI(TAG,"Value at var = %d", var);
    ptr++;
    ESP_LOGI(TAG,"Address at ptr = %d", ptr); 
}