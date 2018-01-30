# CapButton

## Description
I create this library to read (with an Arduino) the tuning of an old radio of the 50's.
On these models, the tuning button was a variable capacitor.

## API
See the API description of the methods offered by this library, in the attached file [API_description.md](API_description.md).

## Notes
Capacity to measure:
* The capacity to measure is between **in_pin** (Analog) and **out_pin** (Analog)  

Stray Capacity (parasite):
* There is a Stray Capacitance between **Pin_In** and **Ground**.
* This Stray capacitance is always present. 

* Extra capacitance can be added to allow higher capacitance to be measured.


Available on GitHub @Sphinkie/CapButton
