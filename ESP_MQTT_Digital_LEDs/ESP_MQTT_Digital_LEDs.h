/***** For manual switch off D3 *******/
int switchPin = 0; // D3
/************ WIFI and MQTT Information (CHANGE THESE FOR YOUR SETUP) ******************/
const char* ssid = "wifi ssid"; //type your WIFI information inside the quotes
const char* password = "password";
const char* mqtt_server = "10.0.10.10";
const char* mqtt_username = "lights";
const char* mqtt_password = "password";
const int mqtt_port = 1883;


#define MILLION 1000000
/**************************** FOR OTA **************************************************/
#define SENSORNAME "kitchenLights1" //change this to whatever you want to call your device
#define OTApassword "password" //the password you will need to enter to upload remotely via the ArduinoIDE
int OTAport = 8266;





/************* MQTT TOPICS (change these topics as you wish)  **************************/
const char* light_state_topic = "home/RGBStrip1";
const char* light_set_topic = "home/RGBStrip1/set";
const char* light_set_topic_group = "home/LEDStrip_Group1/set";
const char* LWT_topic = "home/RGBStrip1/LWT";

/* topic for toggle switch */
const char *toggle_topic = "home/Toggle1";
const char *toggle_payload="{}";

/************ remote debug ******************/
//#define DEBUG_DISABLED
#define HOST_NAME "10.0.0.87" // for remote debug

/*********************************** FastLED Defintions ********************************/
#define NUM_LEDS    300

#define DATA_PIN    5
//#define CLOCK_PIN 5
//#define CHIPSET     WS2811
#define CHIPSET WS2812B
/*
 * 
 * some use RGB, some use GRB, some use BGR - this is why the library 
 * allows you to change the color ordering when adding leds.
 */
#define COLOR_ORDER BRG
