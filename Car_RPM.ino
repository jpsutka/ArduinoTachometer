// Developer: Jacob Psutka
// Purpose:   display engine RPM

// Led class
class Led
{
  private:
    int led_pin;
    bool led_state = false;

  public:
    // constructor
    Led(int pinNumber) 
    {
      led_pin = pinNumber;
    }

    bool get_state()
    {
      return led_state;
    }

    void turn_on() 
    {
      led_state = true;
      analogWrite(led_pin, 0);
    }

    void turn_off() 
    {
      led_state = false;
      analogWrite(led_pin, 255);
    }
};

  // global meh
  Led led1(8);
  Led led2(9);
  Led led3(10);
  Led led4(11);
  Led led5(12);


void setup()
{
  led_init(100);
}


void loop()
{
  // read rpm and do shit
}

// led init when car first turns on
void led_init(int ms)
{
  toggle_led(led1);
  delay(1000);

  toggle_led(led2);
  delay(ms);
  toggle_led(led3);
  delay(ms);
  toggle_led(led4);
  delay(ms);
  toggle_led(led5);
  delay(400);
  toggle_led(led5);
  delay(ms);
  toggle_led(led4);
  delay(ms);
  toggle_led(led3);
  delay(ms);
  toggle_led(led2);
  delay(ms);
}

// blinks led selected
void toggle_led(Led& led)
{
  if (led.get_state() == false)
  {
    led.turn_on();
  }
  else
  {
    led.turn_off();
  }
}

