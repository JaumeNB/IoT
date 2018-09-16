unsigned long last_time_task1 = 0;        // will store last time task 1 was executed
unsigned long last_time_task2 = 0;        // will store last time task 2 was executed
const long interval_task1 = 1000;           // interval at which to blink (milliseconds)
const long interval_task2 = 2000;           // interval at which to blink (milliseconds)

void setup() {
  Serial.begin(9600);
}

void loop() {

  unsigned long current_time = millis();

  if (current_time - last_time_task1 >= interval_task1) 
  {
    last_time_task1 = current_time;
    Serial.print("task 1: ");
    Serial.println(last_time_task1);
  }

  if (current_time - last_time_task2 >= interval_task2) 
  {
    last_time_task2 = current_time;
    Serial.print("task 2: ");
    Serial.println(last_time_task2);
  }
