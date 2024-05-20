# 16_Control_LED_brightness_using_PWM
Controlling the LED brightness using PWM


Not all pins are PWM capable but it is fairly easy to identify PWM pins by looking for "~"

To output PWM Command, we make use of anologWrite(PIN, PWM OUTPUT) varies from 0-255 where 0 - Minimum; 255 - Maximum

Giving a value of 128 will make the LED glow in half-brightness
