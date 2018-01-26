#CapButton

## Description
Gestion de Bouton de type Capacimetre.  
Capacité à mesurer:
* La capacité à mesure est entre in_pin (Analog) et out_pin (Analog)
Capacité parasite (Stray):
* Capacitance between Pin_In and Ground.
* Stray capacitance is always present. 
* Extra capacitance can be added to allow higher capacitance to be measured.

## API description
-----
CapButton::CapButton(int in_pin, int out_pin)
Contructor

-----
void CapButton::begin()
Initialisations

-----
int CapButton::readValue()
On lit et renvoie la position de l'entrée digitale (valeur de 0 à 1023)
Capacitor under test between Pin_out and Pin_In

-----
int CapButton::getValue()
On renvoie la position lue la plus récente (valeur de 0 à 1023)

-----
int CapButton::getLastValue()
On renvoie la position lue précédente (valeur de 0 à 1023)

-----
bool CapButton::hasChanged()
Indique si le bouton a changé de position depuis le dernier appel à la fonction et s'est stabilisé.
        
-----
int CapButton::captureMeanValue(int samples)
Effectue plusieurs mesures pour obtenir une moyenne
Les valeurs mesurées vont de 340 à 120 (cad une amplitude de 220 env).
On les étale entre 0 et 1023.
        
-----
int CapButton::chargeAndMesure()
Effectue une lecture de la valeur.
On envoie une impulsion sur Pin_Out et 0.1ms plus tard, on lit la valeur de Pin_In

-----
void CapButton::dischargeCapacitor()
Décharge la Capa en mettant la masse sur les deux pins
