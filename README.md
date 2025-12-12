# Through-Beam-Sensor

A quick side project built to test the break-beam concept we studied last semester.  
The setup uses:
- Laser diode as the emitter  
- LDR as the receiver  
- Microcontroller (Arduino) for thresholding + counting 

Initially, the system couldn’t detect fast objects because the code had a sampling loop that slowed down the response time. After removing that loop and restructuring the logic, the sensor became fast enough to catch quick beam breaks.

## Features
- Fast, loop-free sampling
- Threshold-based detection
- Basic noise handling (ambient-light tested)
- Lightweight and minimal code

This repo contains the source code used in my video demonstration.
