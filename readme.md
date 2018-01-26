# CapButton

## Description
I create this library to read (with an Arduino) the tuning of an old radio of the 50's.
On these models, the tuning button was a variable capacitor.

## API
See the API description of the methods offered by this library, in the attached file [API_description.md](API_description.md).

## Notes
Capacité à mesurer:
* La capacité à mesurer est entre **in_pin** (Analog) et **out_pin** (Analog)  

Capacité parasite (Stray):
* Capacitance between **Pin_In** and **Ground**.
* Stray capacitance is always present. 
* Extra capacitance can be added to allow higher capacitance to be measured.


Available on GitHub @Sphinkie/CapButton
