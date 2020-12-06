#ifndef __DEFAULT_APP_CONFIG_H__
#define __DEFAULT_APP_CONFIG_H__

#include <ESP8266WiFi.h>

#define DEFAULT_WIFI_SSID "bme280-to-mqtt-%06x"
#define DEFAULT_WIFI_PASSWORD "12345678"
#define DEFAULT_WIFI_MODE WIFI_AP

#define DEFAULT_NET_MODE NET_MODE_DHCP
#define DEFAULT_NET_HOST "192.168.192.1"
#define DEFAULT_NET_MASK "255.255.255.0"
#define DEFAULT_NET_GATEWAY "192.168.192.1"
#define DEFAULT_NET_DNS "192.168.192.1"

#define DEFAULT_OTA_HOSTNAME "bme280-to-mqtt-%06x"
#define DEFAULT_OTA_PASSWORD "otapass"

#define DEFAULT_ADMIN_PASSWORD "admin"

#define DEFAULT_MQTT_ENABLED false
#define DEFAULT_MQTT_CLIENTID "bme280-to-mqtt-%06x"
#define DEFAULT_MQTT_HOST "192.168.1.1"
#define DEFAULT_MQTT_PORT 1883
#define DEFAULT_MQTT_USEAUTH false
#define DEFAULT_MQTT_USER "user"
#define DEFAULT_MQTT_PASSWORD "password"
#define DEFAULT_MQTT_INTOPIC "bme280-to-mqtt-%06x/state"
#define DEFAULT_MQTT_OUTTOPIC "bme280-to-mqtt-%06x/command"
#define DEFAULT_MQTT_TOPIC_JSON "bme280-to-mqtt-%06x/json"
#define DEFAULT_MQTT_SENDING_INTERVAL 15

#define DEFAULT_TELNET_ENABLED true
#define DEFAULT_OTA_ENABLED true

#define DEFAULT_NTP_ENABLED true
#define DEFAULT_NTP_TIMEZONE "CET-1CEST-2,M3.5.0/02:00:00,M10.5.0/03:00:00"
#define DEFAULT_NTP_SERVER1 "ptbtime1.ptb.de"
#define DEFAULT_NTP_SERVER2 "ptbtime2.ptb.de"
#define DEFAULT_NTP_SERVER3 "de.pool.ntp.org"

#define DEFAULT_I2C_SENSOR_ADDRESS 0x76

#endif