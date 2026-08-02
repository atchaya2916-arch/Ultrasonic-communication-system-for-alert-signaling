# Ultrasonic Communication System for Alert Signaling

## 🔹 Problem Statement
Scuba divers lack a reliable, low-cost method to send emergency signals to surface boats. RF communication fails underwater due to attenuation. Existing solutions are expensive or manual.

## 🔹 Proposed Solution
An ultrasonic-based embedded prototype using 40 kHz transducers to transmit emergency alerts from diver to boat.

## 🔹 System Architecture
- Arduino microcontroller – controls transmission/reception
- Ultrasonic transmitter (~40 kHz) – generates acoustic waves
- Ultrasonic receiver – detects signals
- Push button – triggers emergency alert
- Buzzer + Serial Monitor – provides audible + visual feedback


## Working Principle
The system consists of a transmitter and receiver connected through ultrasonic transducers. When the push button at the transmitter is pressed, an ultrasonic signal is transmitted. The receiver detects the signal and processes it using a microcontroller. After detection, a buzzer is activated and a message is displayed on the LCD.

## 🔹 Results
- Successfully transmitted signals at ~50 cm (air medium, no amplification)
- Demonstrated feasibility of short-range underwater signaling
- Highlighted challenges: attenuation, directional propagation, alignment

## 🔹 Future Improvements
- Signal amplification for longer range
- Waterproof housing for underwater testing
- Error detection coding for reliable communication


## Limitations
- Components are not waterproof
- System was tested in air instead of underwater
- Limited communication range

  ## Team Members

- Atchaya G M
- Jaishree S V
- Shraeya 
- Sudharshana P S
