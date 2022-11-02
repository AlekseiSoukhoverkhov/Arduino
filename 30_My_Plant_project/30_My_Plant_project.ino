//Constants that are used in the scatch.
#define CHECK_INTERVAL 60000 // Setting the interval for checking humidity, sunlight, etc.
#define PUMP_TIME 5000 // Setting of the time of pump working when needed
#define SUNCHANGE 200 //Photo sensor sun level
#define HUMIDITY 500 //Photo sensor sun level

//Arduino pins installation
#define PIN_PUMP_1 7 // The first pump connection
#define PIN_PUMP_2 8 // The second pump connection
#define humiditySensor1 A1 //First humidity sensor
#define humiditySensor2 A2 //Second humidity sensor
#define PHOTOSENSOR A0 //Photo sensor sun level
#define WATER_SENSOR 5 // Sensor to check the level of water in the tank
#define ALARM 6 // Alarm on no water in the tank or other error

//variables
int humidityLevel1; //Data of the first sensor
int humidityLevel2; //Data of the second sensor
int sunlevel=0; // Photo sensor data 
int previoursSunlevel=0; // Previos photo sensor results
int difference=0; 

//functions

//The check of the day time if there is a sunrise or sunset
bool sunCheck(){
if (previoursSunlevel!=0){
  difference = sunlevel-previoursSunlevel;
  if (difference >SUNCHANGE || difference <-SUNCHANGE){
    return true;
    }else{
      return false;
    }
  }
}

//The check of the level of water in the tank
bool watercheck(){
  int waterlevel;
  waterlevel = digitalRead(WATER_SENSOR);
  if (waterlevel == HIGH){
    digitalWrite(ALARM, HIGH);
    delay(60000);
    digitalWrite(ALARM, LOW);
    return false;
  }else{
    return true;
    }
 }

//Watering of the plunts
void addWater(int pump_num){
    digitalWrite(pump_num,HIGH);
    delay(PUMP_TIME);
    digitalWrite(pump_num,LOW);
}

void setup() { 
 Serial.begin(9600);
 pinMode(PIN_PUMP_1, OUTPUT);
 pinMode(PIN_PUMP_2, OUTPUT);
 pinMode(WATER_SENSOR, INPUT);
 pinMode(ALARM, OUTPUT);
}

void loop() {
  humidityLevel1=analogRead(humiditySensor1);
  humidityLevel2=analogRead(humiditySensor2);
  sunlevel=analogRead(PHOTOSENSOR);
  if (watercheck()){
    if (sunCheck()) // We are adding water only at sunrize or at suset. So here we check it.
    {
      if (humidityLevel1>HUMIDITY) addWater(PIN_PUMP_1); // if the first sensor shows that humidity level is low we turn on the first pump
      delay(10000);
      if (humidityLevel2>HUMIDITY) addWater(PIN_PUMP_2); // if the secont sensor shows that humidity level is low we turn on the second pump
    }
  }
 previoursSunlevel = sunlevel;
 delay(CHECK_INTERVAL);
}
