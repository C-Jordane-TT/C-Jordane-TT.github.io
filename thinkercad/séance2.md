# **Séance 2 : Introduction aux valeurs analogiques avec une photorésistance - Exercices**

1. **Comprendre les valeurs analogiques :**
   - Demandez aux élèves d'expliquer avec leurs mots la différence entre les valeurs digitales et analogiques. Utilisez des exemples concrets comme un interrupteur (digital) et un variateur de lumière (analogique).

2. **Brancher une photorésistance :**
   - Sur Tinkercad, faites connecter une photorésistance (LDR) et un diviseur de tension à une pin analogique de la carte Arduino.

3. **Lire les valeurs :**
   - Écrivez un programme pour afficher les valeurs analogiques du LDR dans le moniteur série. Exemple : `Serial.println(analogRead(A0));`.

4. **Allumer une DEL selon la lumière :**
   - Programmez une DEL pour qu'elle s'allume uniquement lorsque les valeurs analogiques sont inférieures à un seuil défini (faible lumière).

5. **Expérience :**
   - Faites varier les conditions de lumière (exemple : couvrir le LDR avec une main ou diriger une lampe vers lui) et demandez aux élèves d’observer les valeurs affichées dans le moniteur série ainsi que le comportement de la DEL.
