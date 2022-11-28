# Instruction for this code

the ESP8266 will automatically sleep after finishing the task, then start sleeping

there are 2 ways to trigger:
1. Use pushbutton and use Pull Down Resistor circuit, like this
   ![Image](esp8266-external-wake-up.jpg "PushButton trigger")
2. Use Reed Switch and pull down resistor circuit, like this, but connect the green cable to RST pin on ESP board
   ![Image](ESP8266-Reed-Switch-door-sensor-circuit.jpg "reed switch trigger")
