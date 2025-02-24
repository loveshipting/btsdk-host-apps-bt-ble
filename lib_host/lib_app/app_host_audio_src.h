
/*
 * Copyright 2016-2021, Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software") is owned by Cypress Semiconductor Corporation
 * or one of its affiliates ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products.  Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */


#ifndef APP_HOST_AUDIO_SRC_H
#define APP_HOST_AUDIO_SRC_H

// Audio Source
bool app_host_audio_src_connect(wiced_hci_bt_audio_source_connect_data_t *p_data);
bool app_host_audio_src_disconnect(uint8_t bda[BDA_LEN]);
bool app_host_audio_src_start(uint8_t bda[BDA_LEN], uint8_t sample_freq, uint8_t audio_mode);
bool app_host_audio_src_stop(uint8_t bda[BDA_LEN]);
bool app_host_audio_src_audio_data(uint16_t handle, uint8_t *data, uint16_t len);
bool app_host_audio_src_audio_data_format(uint16_t handle, uint8_t format, uint8_t audio_route);

// Audio Src event
void app_host_audio_src_event(uint16_t opcode, uint8_t * p_data, uint32_t len);

#endif
