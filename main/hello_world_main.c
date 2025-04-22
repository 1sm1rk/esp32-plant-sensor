/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"
#include "esp_mac.h"
#include "esp_system.h"
#include <portmacro.h>
#include "driver/adc.h"
#include "esp_adc_cal.h"

#define ADC1_EXAMPLE_CHAN0          ADC1_CHANNEL_6
//ADC Attenuation
#define ADC_EXAMPLE_ATTEN           ADC_ATTEN_DB_12


static const char* TAG = "Plant-Sensor";

void app_main(void)
{
    static int adc_raw[2][10];

    //ADC1 config
    ESP_ERROR_CHECK(adc1_config_width(ADC_WIDTH_BIT_DEFAULT));
    ESP_ERROR_CHECK(adc1_config_channel_atten(ADC1_EXAMPLE_CHAN0, ADC_EXAMPLE_ATTEN));

    for (;;) {
        ESP_LOGI(TAG, "plant sensor v1");
        adc_raw[0][0] = adc1_get_raw(ADC1_EXAMPLE_CHAN0);
        ESP_LOGI(TAG, "raw  data: %d", adc_raw[0][0]);
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}
