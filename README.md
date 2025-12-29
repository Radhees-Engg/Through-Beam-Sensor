# Through-Beam-Sensor

A quick side project built to test the break-beam concept we studied last semester.  
The setup uses:
- Laser diode as the emitter  
- LDR as the receiver  
- Microcontroller (Arduino) for thresholding + counting 

I've use the raw ADC values of the LDR which is easy to use and faster than calculating the resistance value of the LDR, anyway I have also inclued that formula to caluculate the resistance if you want you can also use that.
Initially, the system couldn’t detect fast objects because the code had a sampling loop that slowed down the response time. After removing that loop and restructuring the logic, the sensor became fast enough to catch quick beam breaks.

## Features
- Fast, loop-free sampling
- Threshold-based detection
- Basic noise handling (ambient-light tested)
- Lightweight and minimal code

Not a big project, but I learned a few things in the process:  
  
\->Fast sampling matters way more than you think.  
\->Code structure directly affects real-time detection.  
\->Even a camera flash can mess with optical sensors.  
\->Threshold tuning + basic filtering gives solid results.  

This repo contains the source code used in my video demonstration.

🔗 Video: https://www.linkedin.com/in/radhees-bala-2a08652b4/
